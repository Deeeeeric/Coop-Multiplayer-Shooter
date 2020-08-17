// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"

bool ASGameMode::ReadyToStartMatch_Implementation()
{
	Super::ReadyToStartMatch();

	return MaxNumPlayers == NumPlayers;
}

void ASGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	PlayerControllerList.Add(NewPlayer);
}
