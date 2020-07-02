// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackerBot.h"
#include "AI/NavigationSystemBase.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "NavigationSystem/Public/NavigationSystem.h"
#include "NavigationSystem/Public/NavigationPath.h"
#include "CoopShooter/SCharacter.h"
#include "Components/SphereComponent.h"
#include "SHealthComponent.h"

// Sets default values
ASTrackerBot::ASTrackerBot()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComp->SetCanEverAffectNavigation(false); // Makes it so that our robot can navigate more freely within its space
	MeshComp->SetSimulatePhysics(true);
	RootComponent = MeshComp;

	HealthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnHealthChanged.AddDynamic(this, &ASTrackerBot::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Spherecomponent"));
	SphereComp->SetSphereRadius(200);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly); // no physics on collision
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore); 
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); // only enable collision for pawn, so we dont get additional overlaps
	SphereComp->SetupAttachment(RootComponent);

	bUseVelocityChange = false;
	MovementForce = 1000;
	RequiredDistanceToTarget = 100;

	ExplosionDamage = 40;
	ExplosionRadius = 200;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();

	// find initial move-to
	NextPathPoint = GetNextPathPoint();
}

void ASTrackerBot::HandleTakeDamage(USHealthComponent* HealthComp, float Health, float HealthDelta,
	const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	// Explode when HP is zero

	if (MatInst == nullptr)
	{
		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));
	}

	if (MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);
	}

	// Explode when health reaches 0
	if (Health <= 0.0f)
	{
		SelfDestruct();
	}

	UE_LOG(LogTemp, Log, TEXT("Health %s of %s"), *FString::SanitizeFloat(Health), *GetName());
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

void ASTrackerBot::SelfDestruct()
{
	if (bExploded)
	{
		return;
	}

	bExploded = true;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(this);

	// apply Damage
	UGameplayStatics::ApplyRadialDamage(
		this,
		ExplosionDamage,
		GetActorLocation(),
		ExplosionRadius,
		nullptr,
		IgnoredActors,
		this,
		GetInstigatorController(),
		true);

	DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Blue, false, 2.0f, 0, 1.0f);

	//Delete Actor immediately
	Destroy();
}

// Called every frame
	void ASTrackerBot::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);

		float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

		if (DistanceToTarget <= RequiredDistanceToTarget)
		{
			NextPathPoint = GetNextPathPoint();

			DrawDebugString(GetWorld(), GetActorLocation(), "Target Reached!");
		}
		else
		{
			// Keep adding force to move towards next target
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();

			ForceDirection *= MovementForce;

			MeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);

			DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 32, FColor::Yellow, false, 0.0f, 0, 1.0f);
		}

		DrawDebugSphere(GetWorld(), NextPathPoint, 20, 12, FColor::Yellow, false, 0.0f, 1.0f);
	}

	// Check if this is a player
	void ASTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
	{
		if (!bStarSelftDestructionTimer)
		{
			ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
			if (PlayerPawn)
			{
				// We overlapped with a player

				// start self destruct sequence
				GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &ASTrackerBot::DamageSelf, 0.5f, true, 0.0f);

				bStarSelftDestructionTimer = true;
			}
		}
	}

	void ASTrackerBot::DamageSelf()
	{
		UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);
	}