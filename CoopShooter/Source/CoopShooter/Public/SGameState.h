// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "SGameState.generated.h"

UENUM(BlueprintType)
enum class ERoundState : uint8
{
	// Waiting for round to start
	RoundStart,

	// Players still alive
	RoundInProgress,

	// Player has won
	RoundFinish,

	// Player Lost
	GameOver,

	// Player Won
	Win
};

/**
 * 
 */

UCLASS()
class COOPSHOOTER_API ASGameState : public AGameStateBase
{
	GENERATED_BODY()

protected:

	UFUNCTION()
	void OnRep_RoundState(ERoundState OldState);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameState")
	void RoundStateChanged(ERoundState NewState, ERoundState OldState);

	// Keep track of current playing state
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_RoundState, Category = "GameState")
		ERoundState RoundState;

	//Replicated Specifier used to mark this variable to replicate
	UPROPERTY(Replicated)
	int32 PlayerScore;

public:

	int32 GetPlayerScore();

	void AddScore(int32 Score);

	ASGameState();

	void SetRoundState(ERoundState NewState);

	virtual void AddPlayerState(APlayerState* PlayerState) override;

	virtual void RemovePlayerState(APlayerState* PlayerState) override;

};
