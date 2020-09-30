// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "SOnlineBeaconClient.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectSuccess, bool, FOnConnected);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisconnected);

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
};
