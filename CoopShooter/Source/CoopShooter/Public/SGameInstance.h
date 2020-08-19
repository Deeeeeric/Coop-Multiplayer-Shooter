// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SGameInstance.generated.h"


class APlayerState;

// Event hook for any time a player is added/removed (triggers via GameState)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerArrayChanged, APlayerState*, PlayerState);
/**
 * 
 */
UCLASS()
class COOPSHOOTER_API USGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	/* New Player joined (runs on clients and server) */
	UPROPERTY(BlueprintAssignable, Category = "Game|Events")
		FPlayerArrayChanged OnPlayerStateAdded;

	/* Existing Player left (runs on clients and server) */
	UPROPERTY(BlueprintAssignable, Category = "Game|Events")
		FPlayerArrayChanged OnPlayerStateRemoved;
	
};
