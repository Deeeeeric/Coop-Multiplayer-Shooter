// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "SOnlineBeaconClient.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectSuccess, bool, FConnected);

UCLASS()
class COOPSHOOTER_API ASOnlineBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()

public:
	ASOnlineBeaconClient();

protected:
	UPROPERTY(BlueprintAssignable)
		FConnectSuccess FConnected;

	UFUNCTION(BlueprintCallable)
		bool ConnectToServerHost(const FString& Address);

	UFUNCTION(BlueprintCallable)
	void LeaveLobby();

	virtual void OnFailure() override;
	virtual void OnConnected() override;
};
