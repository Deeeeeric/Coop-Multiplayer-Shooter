// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"
#include "Net/UnrealNetwork.h"

void ASGameState::PostInitializeComponents()
{
	
	for (TActorIterator<APlayerState> It(World); It; ++It) 
	{
		AddPlayerState(*It);
	}
}
void ASGameState::AddPlayerState(APlayerState* PlayerState) 
{
	if (!PlayerState->bIsInactive) 
	{
		PlayerArray.AddUnique(PlayerState);
	}
}


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



void ASGameState::AddScore(bool PlayerScored)
{
	if (PlayerScored)
	{
		PlayerScore++;
	}
	else
	{
		OpponentScore++;
	}
}

void ASGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASGameState, RoundState);
	DOREPLIFETIME(ASGameState, PlayerScore);
	DOREPLIFETIME(ASGameState, OpponentScore);
}