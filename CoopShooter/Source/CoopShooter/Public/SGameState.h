// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "SPlayerState.h"
#include "SGameState.generated.h"


UCLASS()
class COOPSHOOTER_API ASGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	ASGameState();

protected:
	UPROPERTY(EditDefaultsOnly)
	int ScoreToWin;

	UPROPERTY(EditDefaultsOnly)
	int IncrementScoreValue;

	UPROPERTY(BlueprintReadOnly)
	int AlphaTeamScore;

	UPROPERTY(BlueprintReadOnly)
	int BravoTeamScore;

public:
	// Returns None if neither team has >= ScoreTowin
	ETeam AddScoreToTeam(ETeam Team);

	ETeam GetWinningTeam();
};
