// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SOnlineBeaconHostObject.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASOnlineBeaconHostObject : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
	
public:
	ASOnlineBeaconHostObject();

protected:
	virtual void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) override;

	virtual void NotifyClientDisconnected(AOnlineBeaconClient* LeavingClientActor) override;

	UFUNCTION(BlueprintCallable)
		void DisconnectAllClients();

	UFUNCTION(BlueprintCallable)
		void ShutdownServer();
	
};
