// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerUpActor.h"

// Sets default values
ASPowerUpActor::ASPowerUpActor()
{
	PowerupInterval = 0.0f;
	TotalNumOfTicks = 0;
}

void ASPowerUpActor::ActivatePowerup()
{
	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerUpActor::OnTickPowerup, PowerupInterval, true, 0.0f);
	}
	else
	{
		OnTickPowerup();
	}
}

// Called when the game starts or when spawned
void ASPowerUpActor::BeginPlay()
{
	Super::BeginPlay();
}

void ASPowerUpActor::OnTickPowerup()
{
	TicksProcessed++;

	OnPowerupTicked();

	if (TicksProcessed >= TotalNumOfTicks)
	{
		OnExpired();

		// Delete Timer
		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}