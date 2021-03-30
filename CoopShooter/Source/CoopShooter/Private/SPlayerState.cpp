// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SGameState.h"

ASPlayerState::ASPlayerState()
{
	Team = ETeam::None;
	Kills = 0;
	Deaths = 0;
}

void ASPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASPlayerState, Team); // replicate to any client connected to us
	DOREPLIFETIME(ASPlayerState, Kills);
	DOREPLIFETIME(ASPlayerState, Deaths);
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