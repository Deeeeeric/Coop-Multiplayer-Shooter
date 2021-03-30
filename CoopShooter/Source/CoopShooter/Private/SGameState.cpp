// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"
#include "Net/UnrealNetwork.h"
#include "SCoopShooterGameInstance.h"

ASGameState::ASGameState()
{
	ScoreToWin = 10;
	IncrementScoreValue = 1;
	AlphaTeamScore = 0;
	BravoTeamScore = 0;
}

void ASGameState::AddScoreToTeam(ETeam Team)
{
	if (Team == ETeam::Alpha)
	{
		AlphaTeamScore += IncrementScoreValue;
	}
	else if (Team == ETeam::Bravo)
	{
		BravoTeamScore += IncrementScoreValue;
	}
	UE_LOG(LogTemp, Warning, TEXT("TESTING TO ADD SCORE"));
}
