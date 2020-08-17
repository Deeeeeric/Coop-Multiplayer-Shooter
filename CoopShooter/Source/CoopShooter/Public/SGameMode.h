// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	// Maximum number of players needed/allowed during this match
	int32 MaxNumPlayers;

	// Override implementation of ReadyToStartMatch
	virtual bool ReadyToStartMatch_Implementation() override;

	// List of PlayerControllers
	TArray<class APlayerController*> PlayerControllerList;

	// Overriding the PostLogin Function
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
