// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTER_API ASPlayerState : public APlayerState
{
	GENERATED_BODY()

	UPROPERTY(Transient, Replicated)
	int32 NumKills;
	
public:

	void AddKill();

	void ScorePoints(int32 Points);

	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetKills() const;

	// Used to copy properties from the current PlayerState to the passed one
	virtual void CopyProperties(class APlayerState* PlayerState) override;

	// Used to override the current PlayerState with the properties of the passed one
	virtual void OverrideWith(class APlayerState* PlayerState);
};
