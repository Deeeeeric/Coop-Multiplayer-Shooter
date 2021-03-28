// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SGameState.h"

ASPlayerState::ASPlayerState()
{
	Team = ETeam::None;
}

void ASPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASPlayerState, Team); // replicate to any client connected to us
}

bool ASPlayerState::SetTeam(ETeam JoinTeam)
{
	if (HasAuthority())
	{
		//Perform to see if joining team is full	
		Team = JoinTeam;
		return true;
	}
	return false;
}

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

void ASPlayerState::CopyProperties(APlayerState* PlayerState)
{
}

void ASPlayerState::OverrideWith(class APlayerState* PlayerState)
{

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