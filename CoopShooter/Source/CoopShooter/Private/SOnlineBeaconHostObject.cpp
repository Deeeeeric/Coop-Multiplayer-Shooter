// Fill out your copyright notice in the Description page of Project Settings.


#include "SOnlineBeaconHostObject.h"
#include "SOnlineBeaconClient.h"
#include "MainMenuGMB.h"
#include "OnlineBeaconHost.h"

ASOnlineBeaconHostObject::ASOnlineBeaconHostObject()
{
	ClientBeaconActorClass = ASOnlineBeaconClient::StaticClass();
	BeaconTypeName = ClientBeaconActorClass->GetName();
}

void ASOnlineBeaconHostObject::OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection)
{
	Super::OnClientConnected(NewClientActor, ClientConnection);

	if (NewClientActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("CONNECTED CLIENT VALID"));
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
