// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SGameState.h"

void ASPlayerState::AddKill()
{
	NumKills++;
}


void ASPlayerState::ScorePoints(int32 Points)
{
	SetScore(GetScore() + Points);

	/* Add the score to the global score count */
	ASGameState* GS = GetWorld()->GetGameState<ASGameState>();
	if (GS)
	{
		GS->AddScore(Points);
	}
}

int32 ASPlayerState::GetKills() const
{
	return NumKills;
}

void ASPlayerState::GetLifetimeReplicatedProps(TArray< class FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASPlayerState, NumKills);
}

//void ASPlayerState::CopyProperties(class APlayerState* PlayerState)
//{
//	Super::CopyProperties(PlayerState);
//
//	if (PlayerState)
//	{
//		ASPlayerState* PS = Cast<ASPlayerState>(PlayerState);
//
//		if (PS)
//		{
//			PS->Score = Score;
//		}
//	}
//}
//
//void ASPlayerState::PostInitializeComponents()
//{
//	UWorld* World = GetWorld();
//	//Register this PlayerState with the game's ReplicationInfo
//	if (World->GetGameState() != NULL)
//	{
//		World->GetGameState()->AddPlayerState(this);
//	}
//}