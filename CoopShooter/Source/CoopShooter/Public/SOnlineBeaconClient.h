// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "SOnlineBeaconHostObject.h"
#include "SOnlineBeaconClient.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectSuccess, bool, FOnConnected);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisconnected);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyUpdated, FCoopShooterLobbyInfo, FOnLobbyUpdated);

UCLASS()
class COOPSHOOTER_API ASOnlineBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()

public:
	ASOnlineBeaconClient();

protected:
	UPROPERTY(BlueprintAssignable)
		FConnectSuccess FOnConnected;

	UPROPERTY(BlueprintAssignable)
		FDisconnected FOnDisconnected;

	UPROPERTY(BlueprintAssignable)
		FLobbyUpdated FOnLobbyUpdated;

	UFUNCTION(BlueprintCallable)
		bool ConnectToServerHost(const FString& Address);

	UFUNCTION(BlueprintCallable)
	void LeaveLobby();

	virtual void OnFailure() override;
	virtual void OnConnected() override;

public:
	UFUNCTION(Client, Reliable)
	void Client_OnDisconnected();
	virtual void Client_OnDisconnected_Implementation();

	UFUNCTION(Client, Reliable)
	void Client_OnLobbyUpdated(FCoopShooterLobbyInfo LobbyInfo);
	void Client_OnLobbyUpdated_Implementation(FCoopShooterLobbyInfo LobbyInfo);

};
