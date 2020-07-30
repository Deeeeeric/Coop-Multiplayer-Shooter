// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerUpActor.generated.h"

UCLASS()
class COOPSHOOTER_API ASPowerUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerUpActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnActivated();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnExpired();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnPowerupTicked();

	void ActivatePowerup();
protected:

	// time etween powerup ticks
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;

	// Total times we apply the powerup effect
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNumOfTicks;

	FTimerHandle TimerHandle_PowerupTick;

	// Number of ticks applied
	int32 TicksProcessed;

	UFUNCTION()
	void OnTickPowerup();

	// Keeps state of the powerup
	UPROPERTY(ReplicatedUsing=OnRep_PowerupActive)
	bool bIsPowerupActive; 

	UFUNCTION()
	virtual void OnRep_PowerupActive();

	// use blueprint to reply to boolean change
	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnPowerupStateChange(bool bNewIsActive);
};
