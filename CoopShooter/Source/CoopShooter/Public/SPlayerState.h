// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SPlayerState.generated.h"

/* Set up teams*/
UENUM(BlueprintType)
enum class ETeam : uint8
{
	None	UMETA(DisplayName, "None"), // Default
	Alpha	UMETA(DisplayName, "Alpha"),
	Bravo	UMETA(DisplayName, "Bravo")
};

UCLASS()
class COOPSHOOTER_API ASPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ASPlayerState();

	UPROPERTY(Transient, Replicated)
	int32 NumKills;

protected:
	UPROPERTY(Replicated)
	ETeam Team;
	
public:
	UFUNCTION(BlueprintCallable)
	FORCEINLINE ETeam GetTeam() const {return Team;}

	// Returns true if join was successful
	UFUNCTION(BlueprintCallable)
	bool SetTeam(ETeam JoinTeam);

	void AddKill();

	void ScorePoints(int32 Points);

	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetKills() const;

	// Used to copy properties from the current PlayerState to the passed one
	virtual void CopyProperties(class APlayerState* PlayerState) override;

	// Used to override the current PlayerState with the properties of the passed one
	virtual void OverrideWith(class APlayerState* PlayerState);
};
