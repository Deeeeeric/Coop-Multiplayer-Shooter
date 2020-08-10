// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacterMovementComponent.h"
#include "CoopShooter/SCharacter.h"

float USCharacterMovementComponent::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();

	const ASCharacter* CharOwner = Cast<ASCharacter>(PawnOwner);
	if (CharOwner)
	{
		// Slow down during targeting, but don't further reduce movement speed while also crouching
		if (CharOwner->bWantsToADS && !CharOwner->GetMovementComponent()->IsCrouching())
		{
			MaxSpeed *= CharOwner->ADSInterpSpeed;
		}
		else if (CharOwner->IsSprinting())
		{
			MaxSpeed *= CharOwner->GetSprintingSpeedModifier();
		}
	}

	return MaxSpeed;
}