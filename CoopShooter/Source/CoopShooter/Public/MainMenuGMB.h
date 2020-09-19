// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGMB.generated.h"

/**
 * 
 */
class AOnlineBeaconHost;
class ASOnlineBeaconHostObject;


UCLASS()
class COOPSHOOTER_API AMainMenuGMB : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMainMenuGMB();

	AOnlineBeaconHost* GetHost();
	
protected:
	UFUNCTION(BlueprintCallable)
		bool CreateHostBeacon();

	ASOnlineBeaconHostObject* HostObject;

	AOnlineBeaconHost* Host;

	UFUNCTION(BlueprintCallable)
		ASOnlineBeaconHostObject* GetBeaconHost();

};
