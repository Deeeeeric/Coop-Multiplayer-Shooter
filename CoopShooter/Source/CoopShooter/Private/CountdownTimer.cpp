// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "CountdownTimer.h"

// Sets default values
ACountdownTimer::ACountdownTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("CountdownNumber"));
	CountdownText->SetHorizontalAlignment(EHTA_Center);
	CountdownText->SetWorldSize(150.0f);
	RootComponent = CountdownText;
	CountdownTime = 60;

}

/*
update our text display to show the time remaining, or zero if the time is up. 
This code should run when we first spawn our ACountdown into the game, 
and once per second until our CountdownTime variable hits zero.
*/
void ACountdownTimer::UpdateTimerDisplay()
{
	CountdownText->SetText(FCString::Atoi(*CountdownTime));
}

// Called when the game starts or when spawned
void ACountdownTimer::BeginPlay()
{
	Super::BeginPlay();

	UpdateTimerDisplay();
	
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ACountdownTimer::AdvanceTimer, 1.0f, true);
	
}

void ACountdownTimer::AdvanceTimer()
{
	--CountdownTime;
	UpdateTimerDisplay();

	if (CountdownTime < 1)
	{
		// Stop running the timer
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		CountdownFinished();
	}
}

void ACountdownTimer::CountdownFinished()
{
	// Change to a special readout, display TIME OVER
	CountdownText->SetText(TEXT("Time Over"));

}

// Called every frame
void ACountdownTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

