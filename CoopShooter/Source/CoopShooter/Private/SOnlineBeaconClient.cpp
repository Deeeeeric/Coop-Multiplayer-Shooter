// Fill out your copyright notice in the Description page of Project Settings.


#include "SOnlineBeaconClient.h"

ASOnlineBeaconClient::ASOnlineBeaconClient()
{
	PlayerIndex = 0;
}


void ASOnlineBeaconClient::OnFailure()
{
	UE_LOG(LogTemp, Warning, TEXT("Client failure to connect to host beacon."));
	FOnConnected.Broadcast(false);
}

void ASOnlineBeaconClient::OnConnected()
{
	UE_LOG(LogTemp, Warning, TEXT("Client connected to host beacon."));
	FOnConnected.Broadcast(true);
}

void ASOnlineBeaconClient::Client_OnDisconnected_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("DISCONNECTED"));
	FOnDisconnected.Broadcast();
}

void ASOnlineBeaconClient::Client_OnLobbyUpdated_Implementation(FCoopShooterLobbyInfo LobbyInfo)
{
	FOnLobbyUpdated.Broadcast(LobbyInfo);
}

void ASOnlineBeaconClient::SetPlayerIndex(uint8 Index)
{
	PlayerIndex = Index;
}

uint8 ASOnlineBeaconClient::GetPlayerIndex()
{
	return PlayerIndex;
}

bool ASOnlineBeaconClient::ConnectToServerHost(const FString& Address)
{
	FURL Destination = FURL(nullptr, *Address, ETravelType::TRAVEL_Absolute);
	Destination.Port = 7787;

	return InitClient(Destination);
}

void ASOnlineBeaconClient::LeaveLobby()
{
	DestroyBeacon();
}
