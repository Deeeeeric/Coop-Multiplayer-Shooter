// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameModeBase.h"
#include "SHealthComponent.h"
#include "SPlayerState.h"

ASGameModeBase::ASGameModeBase()
{
	PlayerStateClass = ASPlayerState::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

void ASGameModeBase::CheckAnyPlayerAlive()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();
			USHealthComponent* HealthComponent = Cast<USHealthComponent>(MyPawn->GetComponentByClass(USHealthComponent::StaticClass()));
			if (ensure(HealthComponent) && HealthComponent->GetHealth() > 0.0f)
			{
				// Player is still alive
				return;
			}
		}
	
	}

	GameOver();
	// RoundRestart
}

void ASGameModeBase::GameOver()
{
	//TODO: present 'game over' to players and winner

	UE_LOG(LogTemp, Log, TEXT("%s died!"), *GetWorld()->GetName());
}

void ASGameModeBase::StartPlay()
{
	Super::StartPlay();
}

void ASGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	CheckAnyPlayerAlive();
}
