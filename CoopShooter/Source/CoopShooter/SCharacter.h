// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

// Forward Declaration
class UCameraComponent;
class USpringArmComponent;
class ASWeapon;
class USHealthComponent;

UCLASS()
class COOPSHOOTER_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

	/* Retrieve Pitch/Yaw from current camera */
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	FRotator GetAimOffsets() const;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Ammo")
		int32 LoadedAmmo;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Ammo")
		int32 AmmoPool;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Camera Component Class*
	/* BlueprintReadOnly: Can't assign new object to this camera component, 
	instead we create instance once in constructor*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComponent;


	/************************************************************************/
	/* Movement                                                            */
	/************************************************************************/
	
	virtual void MoveForward(float Value);

	virtual void MoveRight(float Value);

	void BeginCrouch();

	void EndCrouch();

	void BeginSprint();

	void EndSprint();

	UPROPERTY(EditDefaultsOnly)
	float SprintSpeed;

	UPROPERTY(EditDefaultsOnly)
	float WalkSpeed;

	/* Character wants to run, checked during Tick to see if allowed */
	UPROPERTY(Transient, Replicated)
	bool bWantsToSprint;

	/* Client/local call to update sprint state  */
	void SetSprinting(bool NewSprinting);

	/* Server side call to update actual sprint state */
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetSprinting(bool NewSprinting);


	/************************************************************************/
	/* Aim Down Sights                                                      */
	/************************************************************************/

	void BeginADS();

	void EndADS();

	/* Default FOV set during begin play*/
	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ADS_FOV;

public:
	UFUNCTION(BlueprintCallable, Category = Movement)
		bool IsSprinting() const;

	float GetSprintingSpeedModifier() const;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float SprintingSpeedModifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	bool bWantsToADS;

	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (ClampMin = 0.1, ClampMax = 100))
	float ADSInterpSpeed;

protected:

	/************************************************************************/
	/* Weapon                                                               */
	/************************************************************************/

	UPROPERTY(Replicated) // REPLICATE THE WEAPON Functionality to Client
	ASWeapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<ASWeapon> StarterWeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;

	void Fire();

	/************************************************************************/
	/* Player status                                                        */
	/************************************************************************/

	UFUNCTION()
	void OnHealthChanged(USHealthComponent* OwningHealthComponent, float Health, float HealthDelta, const class UDamageType* DamageType,
		class AController* InstigatedBy, AActor* DamageCauser);

	// Pawn died previously
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Player")
	bool bDied;
};
