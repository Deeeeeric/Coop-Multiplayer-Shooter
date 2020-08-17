// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"

void ASPlayerState::AddScore(float ScoreDelta)
{
	Score += ScoreDelta;
}

void ASPlayerState::CopyProperties(class APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);

	if (PlayerState)
	{
		ASPlayerState* PS = Cast<ASPlayerState>(PlayerState);

		if (PS)
		{
			PS->Score = Score;
		}
	}
}

void ASPlayerState::PostInitializeComponents()
{
	UWorld* World = GetWorld();
	//Register this PlayerState with the game's ReplicationInfo
	if (World->GetGameState() != NULL)
	{
		World->GetGameState()->AddPlayerState(this);
	}
}