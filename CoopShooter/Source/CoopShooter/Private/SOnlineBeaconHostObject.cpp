// Fill out your copyright notice in the Description page of Project Settings.


#include "SOnlineBeaconHostObject.h"
#include "SOnlineBeaconClient.h"

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
