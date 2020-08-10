// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFrameWork/PawnMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "CoopShooter/CoopShooter.h"
#include "SHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "SCharacterMovementComponent.h"
#include "SWeapon.h"

// Sets default values
ASCharacter::ASCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->bUsePawnControlRotation = true;

	// GetMovementComponent:

	/* Return our PawnMovementComponent, if we have one. By default, returns the first PawnMovementComponent found.
	Native classes that create their own movement component should override this method for more efficiency. */
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);

	HealthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComponent"));
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	/* bUsePawnControlRotation:
	If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?*/

	ADS_FOV = 65.f;
	ADSInterpSpeed = 20.f;

	WalkSpeed = 300.f;
	SprintSpeed = 800.f;
	SprintingSpeedModifier = 2.5f;

	WeaponAttachSocketName = "WeaponSocket";

	LoadedAmmo = 5;
	AmmoPool = 5;
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();

	DefaultFOV = CameraComponent->FieldOfView;

	HealthComponent->OnHealthChanged.AddDynamic(this, &ASCharacter::OnHealthChanged);

	if (HasAuthority()) // Only run code if we run the game from a server
	{
		// spawn default weapon
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		
		// Runs both on client and server
		CurrentWeapon = GetWorld()->SpawnActor<ASWeapon>(StarterWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (CurrentWeapon)
		{
			CurrentWeapon->SetOwner(this);
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
		}
	}
}

void ASCharacter::MoveForward(float Value)
{
	// GetActorForwardVector: Get the forward (X) vector (length 1.0) from this Actor, in world space.

	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// Limit pitch when walking or falling
		const bool bLimitRotation = (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling());

		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();

		//add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction * Value);
	}
}

void ASCharacter::MoveRight(float Value)
{
	if (Value != 0.f)
	{
		const FRotator Rotation = GetActorRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		AddMovementInput(Direction * Value);
	}
}

void ASCharacter::BeginCrouch()
{
	Crouch();
}

void ASCharacter::EndCrouch()
{
	UnCrouch();
}

void ASCharacter::BeginSprint()
{
	SetSprinting(true);
	//GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}


void ASCharacter::EndSprint()
{
	SetSprinting(false);
	//GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void ASCharacter::SetSprinting(bool NewSprinting)
{
	bWantsToSprint = NewSprinting;

	if (bIsCrouched)
		UnCrouch();

	// TODO: Stop weapon fire

	if (GetLocalRole() < ROLE_Authority)
	{
		ServerSetSprinting(NewSprinting);
	}
}

void ASCharacter::ServerSetSprinting_Implementation(bool NewSprinting)
{
	SetSprinting(NewSprinting);
}


bool ASCharacter::ServerSetSprinting_Validate(bool NewSprinting)
{
	return true;
}

bool ASCharacter::IsSprinting() const
{
	if (!GetCharacterMovement())
		return false;

	return bWantsToSprint && !bWantsToADS && !GetVelocity().IsZero()
		// Don't allow sprint while strafing sideways or standing still (1.0 is straight forward, -1.0 is backward while near 0 is sideways or standing still)
		&& (GetVelocity().GetSafeNormal2D() | GetActorRotation().Vector()) > 0.8; // Changing this value to 0.1 allows for diagonal sprinting. (holding W+A or W+D keys)
}

float ASCharacter::GetSprintingSpeedModifier() const
{
	return SprintingSpeedModifier;
}

void ASCharacter::BeginADS()
{
	bWantsToADS = true;
}

void ASCharacter::EndADS()
{
	bWantsToADS = false;
}

FRotator ASCharacter::GetAimOffsets() const
{
	const FVector AimDirWS = GetBaseAimRotation().Vector();
	const FVector AimDirLS = ActorToWorld().InverseTransformVectorNoScale(AimDirWS);
	const FRotator AimRotLS = AimDirLS.Rotation();

	return AimRotLS;
}

void ASCharacter::Fire()
{
	// Check to see if there is any loaded ammo
	if (LoadedAmmo <= 0)
	{
		return;
	}

	LoadedAmmo = LoadedAmmo - 1;

	if (CurrentWeapon)
	{
		CurrentWeapon->Fire();
	}
}

void ASCharacter::OnReload()
{
	FHitResult Hit;

}

void ASCharacter::OnHealthChanged(USHealthComponent* OwningHealthComponent, float Health, float HealthDelta,
	const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0.0f && !bDied)
	{
		// Die
		bDied = true;

		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		DetachFromControllerPendingDestroy();

		SetLifeSpan(5.0f);
	}
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float TargetFOV = bWantsToADS ? ADS_FOV : DefaultFOV;

	float NewFOV = FMath::FInterpTo(CameraComponent->FieldOfView, TargetFOV, DeltaTime, ADSInterpSpeed);

	CameraComponent->SetFieldOfView(NewFOV);

	if (bWantsToSprint && !IsSprinting())
	{
		SetSprinting(true);
	}

}


// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// For moving the character -------- (Axis name, what object is using it, class)
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ASCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ASCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASCharacter::EndCrouch);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASCharacter::BeginSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASCharacter::EndSprint);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAction("ADS", IE_Pressed, this, &ASCharacter::BeginADS);
	PlayerInputComponent->BindAction("ADS", IE_Released, this, &ASCharacter::EndADS);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASCharacter::Fire);
}

FVector ASCharacter::GetPawnViewLocation() const
{
	if (CameraComponent)
	{
		return CameraComponent->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

// lets us specify exactly what we want to replicate and how we want to replicate something
void ASCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Value is already updated locally, skip in replication step
	DOREPLIFETIME_CONDITION(ASCharacter, bWantsToSprint, COND_SkipOwner);
	//DOREPLIFETIME_CONDITION(ASCharacter, bIsADS, COND_SkipOwner);

	DOREPLIFETIME(ASCharacter, CurrentWeapon); // replicate to any client connected to us
	DOREPLIFETIME(ASCharacter, bDied);
	DOREPLIFETIME(ASCharacter, LoadedAmmo);
}