// Fill out your copyright notice in the Description page of Project Settings.


#include "SAmmoCrate.h"
#include "CoopShooter/SCharacter.h"
#include "Components/SphereComponent.h"

// Sets default values
ASAmmoCrate::ASAmmoCrate()
{
	Count = 2;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetSphereRadius(45.f);
	SphereComponent->SetCollisionProfileName(TEXT("Trigger"));
	RootComponent = SphereComponent;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ASAmmoCrate::OnPickup);

	StaticMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASAmmoCrate::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASAmmoCrate::OnPickup(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASCharacter *Character = Cast<ASCharacter>(OtherActor);

	if (Character)
	{
		Character->LoadedAmmo = Character->LoadedAmmo + Count;
	}
	else if (LoadedAmmo > 3 && != 5)
	{
		Character->LoadedAmmo = Character->LoadedAmmo + 1;
	}

	Destroy();
}


