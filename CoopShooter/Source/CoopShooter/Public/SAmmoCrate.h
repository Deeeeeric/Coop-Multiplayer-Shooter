// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SAmmoCrate.generated.h"

UCLASS()
class COOPSHOOTER_API ASAmmoCrate : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASAmmoCrate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AmmoCrate")
		class USphereComponent* SphereComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AmmoCrate")
		class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AmmoCrate")
		int32 Count;

	UFUNCTION()
	void OnPickup(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
