// Fill out your copyright notice in the Description page of Project Settings.


#include "SOnlineBeaconHostObject.h"
#include "SOnlineBeaconClient.h"
#include "MainMenuGMB.h"
#include "OnlineBeaconHost.h"
#include "TimerManager.h"

ASOnlineBeaconHostObject::ASOnlineBeaconHostObject()
{
	ClientBeaconActorClass = ASOnlineBeaconClient::StaticClass();
	BeaconTypeName = ClientBeaconActorClass->GetName();
	Http = &FHttpModule::Get();
}

void ASOnlineBeaconHostObject::UpdateLobbyInfo(FCoopShooterLobbyInfo NewLobbyInfo)
{
	LobbyInfo.PlayerList = NewLobbyInfo.PlayerList;
	UpdateClientLobbyInfo();
	FOnHostLobbyUpdated.Broadcast(LobbyInfo);
}

void ASOnlineBeaconHostObject::UpdateClientLobbyInfo()
{
	for (AOnlineBeaconClient* ClientBeacon : ClientActors)
	{
		if (ASOnlineBeaconClient* Client = Cast<ASOnlineBeaconClient>(ClientBeacon))
		{
			Client->Client_OnLobbyUpdated(LobbyInfo);
		}
	}
}

void ASOnlineBeaconHostObject::BeginPlay()
{
	LobbyInfo.PlayerList.Add(FString("Host"));
	GetWorld()->GetTimerManager().SetTimer(TInitialLobbyHandle, this, &ASOnlineBeaconHostObject::InitialLobbyHandling, 0.2f, false);
}

void ASOnlineBeaconHostObject::InitialLobbyHandling()
{
	UpdateLobbyInfo(LobbyInfo);

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetNumberField("ServerID", 0);
	JsonObject->SetStringField("IPAddress", "127.0.0.1");
	JsonObject->SetStringField("ServerName", "TEST SERVER NAME");
	JsonObject->SetNumberField("CurrentPlayers", 0);
	JsonObject->SetNumberField("MaxPlayers", 0);

	FString JsonString;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&JsonString);
	
	//requests
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();

	//Bind requests
	Request->OnProcessRequestComplete().BindUObject(this, &ASOnlineBeaconHostObject::OnProcessRequestComplete);

	Request->SetURL("https://localhost:44311/api/Host"); //Request URL to api URL
	Request->SetVerb("POST"); //Verb to POST
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json")); //Content-type header to application/json
	Request->SetContentAsString(JsonString);
	Request->ProcessRequest();
}

void ASOnlineBeaconHostObject::OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool Success)
{
	if (Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("HttpRequest Success: %s"), *Response->GetContentAsString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("HttpRequest FAILED"));
	}
}

void ASOnlineBeaconHostObject::OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection)
{
	Super::OnClientConnected(NewClientActor, ClientConnection);

	if (NewClientActor)
	{
		FString PlayerName = FString("Player ");
		uint8 Index = LobbyInfo.PlayerList.Num();
		PlayerName.Append(FString::FromInt(Index));
		LobbyInfo.PlayerList.Add(PlayerName);

		if (ASOnlineBeaconClient* Client = Cast<ASOnlineBeaconClient>(NewClientActor))
		{
			Client->SetPlayerIndex(Index);
		}

		FOnHostLobbyUpdated.Broadcast(LobbyInfo);

		UE_LOG(LogTemp, Warning, TEXT("CONNECTED CLIENT VALID"));
		UpdateClientLobbyInfo();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CONNECTED CLIENT INVALID"));
	}
}

void ASOnlineBeaconHostObject::NotifyClientDisconnected(AOnlineBeaconClient* LeavingClientActor)
{
	Super::NotifyClientDisconnected(LeavingClientActor);

	UE_LOG(LogTemp, Warning, TEXT("Client has DISCONNECTED."));

	if (ASOnlineBeaconClient* Client = Cast<ASOnlineBeaconClient>(LeavingClientActor))
	{
		uint8 Index = Client->GetPlayerIndex();
		LobbyInfo.PlayerList.RemoveAt(Index);
	}

	FOnHostLobbyUpdated.Broadcast(LobbyInfo);
	UpdateClientLobbyInfo();
}

void ASOnlineBeaconHostObject::DisconnectAllClients()
{
	UE_LOG(LogTemp, Warning, TEXT("DISCONNECTING ALL CLIENTS."));
	for (AOnlineBeaconClient* Client : ClientActors)
	{
		if (Client)
		{
			DisconnectClient(Client);
		}
	}
}

void ASOnlineBeaconHostObject::DisconnectClient(AOnlineBeaconClient* ClientActor)
{
	AOnlineBeaconHost* BeaconHost = Cast<AOnlineBeaconHost>(GetOwner());
	if (BeaconHost)
	{
		if (ASOnlineBeaconClient* Client = Cast<ASOnlineBeaconClient>(ClientActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("DISCONNECTING CLIENT %s"), *ClientActor->GetName());
			Client->Client_OnDisconnected();
		}
		BeaconHost->DisconnectClient(ClientActor);
	}
}

void ASOnlineBeaconHostObject::StartServer()
{

}

void ASOnlineBeaconHostObject::ShutdownServer()
{
	// Unregister server from database via web api
	DisconnectAllClients();

	if (AOnlineBeaconHost* Host = Cast<AOnlineBeaconHost>(GetOwner()))
	{
		UE_LOG(LogTemp, Warning, TEXT("DESTROYING HOST BEACON"));
		Host->UnregisterHost(BeaconTypeName);
		Host->DestroyBeacon();
	}
}
