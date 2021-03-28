// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, KilledActor, AActor*, KillerActor, AController*, KillerController);

/**
 * 
 */

class FOnActorKilled;
class ACharacterBase;

UCLASS()
class COOPSHOOTER_API ASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	// Returns true if a team has won
	bool CheckIfTeamScoreWins();
	
	
public:
	ASGameModeBase();
	
public:
	void PlayerKilled(ACharacterBase* Killer, ACharacterBase* Killed);

	virtual void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(BlueprintAssignable, Category = "GameMode")
		FOnActorKilled OnActorKilled;
};
