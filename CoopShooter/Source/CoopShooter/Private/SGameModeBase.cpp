// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameModeBase.h"
#include "SHealthComponent.h"
#include "SGameState.h"
#include "SPlayerState.h"
#include "CoopShooter/SCharacter.h"

ASGameModeBase::ASGameModeBase()
{
	bGameInProgress = true;
}

bool ASGameModeBase::CheckIfTeamScoreWins()
{
	return false;
}

void ASGameModeBase::PlayerKilled(ASCharacter* Killer, ASCharacter* Killed)
{
	if (!bGameInProgress)
	{
		return;
	}
	// Go to Team State and add point for team killer
	// add point to killer player state
	// add death to killed player state

	if (ASGameState* GS = GetGameState<ASGameState>())
	{
		if (Killer)
		{
			if (ASPlayerState* PS = Killer->GetPlayerState<ASPlayerState>())
			{
				PS->AddKill();
				ETeam WinningTeam = GS->AddScoreToTeam(PS->GetTeam());
				if (WinningTeam != ETeam::None)
				{
					// A team has won
					bGameInProgress = false;
				}
			}
		}
		if (Killed)
		{
			if (ASPlayerState* PS = Killed->GetPlayerState<ASPlayerState>())
			{
				PS->AddDeath();
			}
		}
	}
}

