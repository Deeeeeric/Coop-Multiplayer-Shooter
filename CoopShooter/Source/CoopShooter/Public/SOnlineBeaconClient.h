// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "SOnlineBeaconClient.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASOnlineBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()

public:
	ASOnlineBeaconClient();

protected:
	UFUNCTION(BlueprintCallable)
		bool ConnectToServerHost(const FString& Address);

	virtual void OnFailure() override;
	virtual void OnConnected() override;
};
