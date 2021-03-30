// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, KilledActor, AActor*, KillerActor, AController*, KillerController);

/**
 * 
 */

class ASCharacter;
class FOnActorKilled;

UCLASS()
class COOPSHOOTER_API ASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASGameModeBase();

protected:
	bool bGameInProgress;

protected:
	// Returns true if a team has won
	bool CheckIfTeamScoreWins();
	
public:
	void PlayerKilled(ASCharacter* Killer, ASCharacter* Killed);

	UPROPERTY(BlueprintAssignable, Category = "GameMode")
		FOnActorKilled OnActorKilled;
};
