// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameModeBase.h"
#include "SHealthComponent.h"
#include "SGameState.h"
#include "SPlayerState.h"
#include "CoopShooter/SCharacter.h"

ASGameModeBase::ASGameModeBase()
{
	PlayerStateClass = ASPlayerState::StaticClass();
	GameStateClass = ASGameState::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

bool ASGameModeBase::CheckIfTeamScoreWins()
{
	return false;
}

void ASGameModeBase::PlayerKilled(ACharacterBase* Killer, ACharacterBase* Killed)
{
	// Go to Team State and add point for team killer
	// add point to killer player state
	// add death to killed player state
}

void ASGameModeBase::StartPlay()
{
	Super::StartPlay();
}

void ASGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
}
