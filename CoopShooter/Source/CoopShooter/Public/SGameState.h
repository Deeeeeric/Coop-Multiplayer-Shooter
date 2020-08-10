// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SGameState.generated.h"
//
//UENUM(BlueprintType)
//enum class ERoundState : uint8
//{
//	RoundStart,
//
//	RoundInProgress,
//
//	RoundFinish,
//
//	PrepareNextRound,
//
//	GameOver,
//};


/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASGameState : public AGameStateBase
{
	GENERATED_BODY()

protected:

	/*UFUNCTION()
	OnRep_Roundstate();*/
	

public:

	//UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RoundState, Category = "Gamestate")
	//ERoundState RoundState;
};
