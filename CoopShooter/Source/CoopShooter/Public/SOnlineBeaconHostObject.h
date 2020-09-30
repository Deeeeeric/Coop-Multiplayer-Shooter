// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SOnlineBeaconHostObject.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCoopShooterLobbyInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	TArray<FString> PlayerList;
};

UCLASS()
class COOPSHOOTER_API ASOnlineBeaconHostObject : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
	
public:
	ASOnlineBeaconHostObject();

protected:
	FCoopShooterLobbyInfo LobbyInfo;

	UFUNCTION(BlueprintCallable)
	void UpdateLobbyInfo(FCoopShooterLobbyInfo NewLobbyInfo);

	void UpdateClientLobbyInfo();

protected:
	virtual void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) override;

	virtual void NotifyClientDisconnected(AOnlineBeaconClient* LeavingClientActor) override;

	UFUNCTION(BlueprintCallable)
		void DisconnectAllClients();

	virtual void DisconnectClient(AOnlineBeaconClient* ClientActor) override;

	UFUNCTION(BlueprintCallable)
		void ShutdownServer();
	
};
