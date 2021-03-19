// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "Http.h"
#include "OnlineJsonSerializer.h"
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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHostLobbyUpdated, FCoopShooterLobbyInfo, FOnHostLobbyUpdated);

UCLASS()
class COOPSHOOTER_API ASOnlineBeaconHostObject : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
	
public:
	ASOnlineBeaconHostObject();

protected:
	FHttpModule* Http;

	void OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool Success);

protected:
	FCoopShooterLobbyInfo LobbyInfo;

	UPROPERTY(BlueprintAssignable)
	FHostLobbyUpdated FOnHostLobbyUpdated;

	UFUNCTION(BlueprintCallable)
	void UpdateLobbyInfo(FCoopShooterLobbyInfo NewLobbyInfo);

	void UpdateClientLobbyInfo();

	FTimerHandle TInitialLobbyHandle;
	void InitialLobbyHandling();

protected:
	virtual void BeginPlay() override;

	virtual void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) override;

	virtual void NotifyClientDisconnected(AOnlineBeaconClient* LeavingClientActor) override;

	UFUNCTION(BlueprintCallable)
	void DisconnectAllClients();

	virtual void DisconnectClient(AOnlineBeaconClient* ClientActor) override;

	UFUNCTION(BlueprintCallable)
	void StartServer();

	UFUNCTION(BlueprintCallable)
	void ShutdownServer();
	
};
