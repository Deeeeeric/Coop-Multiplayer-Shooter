// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGMB.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTER_API AMainMenuGMB : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMainMenuGMB();
	
protected:
	UFUNCTION(BlueprintCallable)
		bool CreateHostBeacon();

	class ASOnlineBeaconHostObject* HostObject;

};
