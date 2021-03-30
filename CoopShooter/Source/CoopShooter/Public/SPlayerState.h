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

protected:
	UPROPERTY(Replicated)
	ETeam Team;

	UPROPERTY(Replicated)
	int Kills;

	UPROPERTY(Replicated)
	int Deaths;
	
public:
	UFUNCTION(BlueprintCallable)
	FORCEINLINE ETeam GetTeam() const {return Team;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetKills() const {return Kills;}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetDeaths() const {return Deaths;}


	// Returns true if join was successful
	UFUNCTION(BlueprintCallable)
	bool SetTeam(ETeam JoinTeam);

	void AddKill() {++Kills;}
	void AddDeath() {++Deaths;}
};
