// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"
#include "Net/UnrealNetwork.h"
#include "SGameInstance.h"

//void AGameState::PostInitializeComponents()
//{
//	
//	for (TActorIterator<APlayerState> It(World); It; ++It) 
//	{
//		AddPlayerState(*It);
//	}
//}
//void AGameState::AddPlayerState(APlayerState* PlayerState) 
//{
//	if (!PlayerState->bIsInactive) 
//	{
//		PlayerArray.AddUnique(PlayerState);
//	}
//}


void ASGameState::OnRep_RoundState(ERoundState OldState)
{
	RoundStateChanged(RoundState, OldState);
}

void ASGameState::SetRoundState(ERoundState NewState)
{
	if (HasAuthority())
	{
		ERoundState OldState = RoundState;

		RoundState = NewState;
		// Call on server
		OnRep_RoundState(OldState);
	}
}



int32 ASGameState::GetPlayerScore()
{
	return PlayerScore;
}

void ASGameState::AddScore(int32 Score)
{
	PlayerScore += Score;
}
	

void ASGameState::AddPlayerState(APlayerState* PlayerState)
{
	Super::RemovePlayerState(PlayerState);

	USGameInstance* GI = GetWorld()->GetGameInstance<USGameInstance>();
	if (ensure(GI))
	{
		GI->OnPlayerStateRemoved.Broadcast(PlayerState);
	}
}

void ASGameState::RemovePlayerState(APlayerState* PlayerState)
{
	Super::RemovePlayerState(PlayerState);

	USGameInstance* GI = GetWorld()->GetGameInstance<USGameInstance>();
	if (ensure(GI))
	{
		GI->OnPlayerStateRemoved.Broadcast(PlayerState);
	}
}

void ASGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASGameState, RoundState);
	DOREPLIFETIME(ASGameState, PlayerScore);
}