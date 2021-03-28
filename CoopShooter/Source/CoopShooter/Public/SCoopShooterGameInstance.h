// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Http.h"
#include "SCoopShooterGameInstance.generated.h"


class APlayerState;

// Event hook for any time a player is added/removed (triggers via GameState)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerArrayChanged, APlayerState*, PlayerState);

USTRUCT (BlueprintType)
struct FServerData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ServerID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString IPAddress;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ServerName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int CurrentPlayers;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MaxPlayers;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FServersReceived);
/**
 * 
 */
UCLASS()
class COOPSHOOTER_API USCoopShooterGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	USCoopShooterGameInstance();

protected:
	FHttpModule* Http;

	UPROPERTY(BlueprintAssignable)
		FServersReceived FOnServersReceived;

	UFUNCTION(BlueprintCallable)
	void GetServerList();

	void OnServerListRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool Success);

public:

	/* New Player joined (runs on clients and server) */
	UPROPERTY(BlueprintAssignable, Category = "Game|Events")
		FPlayerArrayChanged OnPlayerStateAdded;

	/* Existing Player left (runs on clients and server) */
	UPROPERTY(BlueprintAssignable, Category = "Game|Events")
		FPlayerArrayChanged OnPlayerStateRemoved;
	
};
