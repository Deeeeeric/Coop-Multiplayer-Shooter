// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameModeBase.generated.h"


#define SURFACE_FLESHDEFAULT		SurfaceType1
#define SURFACE_FLESHVUNERABLE		SurfaceType2

#define COLLISION_WEAPON			ECCGameTraceChannel1
/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	void CheckAnyPlayerAlive();

	void RoundRestart();

	void GameOver();

public:

	ASGameModeBase();

	virtual void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;

};
