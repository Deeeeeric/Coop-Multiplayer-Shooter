// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerUpActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASPowerUpActor::ASPowerUpActor()
{
	PowerupInterval = 0.0f;
	TotalNumOfTicks = 0;

	bIsPowerupActive = false;

	SetReplicates(true);
}

void ASPowerUpActor::OnTickPowerup()
{
	TicksProcessed++;

	OnPowerupTicked();

	if (TicksProcessed >= TotalNumOfTicks)
	{
		OnExpired();

		bIsPowerupActive = false;
		OnRep_PowerupActive();

		// Delete Timer
		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}

void ASPowerUpActor::OnRep_PowerupActive()
{
	OnPowerupStateChange(bIsPowerupActive);
}

void ASPowerUpActor::ActivatePowerup()
{
	OnActivated();

	bIsPowerupActive = true; // replicate to all clients
	OnRep_PowerupActive(); // client sees the change

	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerUpActor::OnTickPowerup, PowerupInterval, true);
	}
	else
	{
		OnTickPowerup();
	}
}


// lets us specify exactly what we want to replicate and how we want to replicate something
void ASPowerUpActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Value is already updated locally, skip in replication step
	DOREPLIFETIME(ASPowerUpActor, bIsPowerupActive)
}