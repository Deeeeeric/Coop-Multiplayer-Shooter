// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackerBot.h"
#include "AI/NavigationSystemBase.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "NavigationSystem/Public/NavigationSystem.h"
#include "NavigationSystem/Public/NavigationPath.h"

// Sets default values
ASTrackerBot::ASTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComp->SetCanEverAffectNavigation(false); // Makes it so that our robot can navigate more freely within its space
	RootComponent = MeshComp;

}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	
}

FVector ASTrackerBot::GetNextPathPoint()
{
	// Hack, to get player location
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);

	// Get the NEXT path point
	if (NavPath->PathPoints.Num() > 1)
	{
		// return next point to the path
		return NavPath->PathPoints[1];
	}

	// Failed to find path
	return GetActorLocation();
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
