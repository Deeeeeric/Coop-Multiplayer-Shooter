// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGMB.h"
#include "SOnlineBeaconHostObject.h"
#include "OnlineBeaconHost.h"


AMainMenuGMB::AMainMenuGMB()
{
	HostObject = nullptr;
	Host = nullptr;
}


bool AMainMenuGMB::CreateHostBeacon()
{
	Host = GetWorld()->SpawnActor<AOnlineBeaconHost>(AOnlineBeaconHost::StaticClass());
	if (Host)
	{
		UE_LOG(LogTemp, Warning, TEXT("SPAWNED AOnlineBeaconHost"))
		if (Host->InitHost())
		{
			Host->PauseBeaconRequests(false);
			UE_LOG(LogTemp, Warning, TEXT("INIT HOST"))
			HostObject = GetWorld()->SpawnActor<ASOnlineBeaconHostObject>(ASOnlineBeaconHostObject::StaticClass());
			if (HostObject)
			{
				UE_LOG(LogTemp, Warning, TEXT("SPAWNED HOST OBJECT"))
				Host->RegisterHost(HostObject);
				return true;
			}
		}
	}
	return false;
}

ASOnlineBeaconHostObject* AMainMenuGMB::GetBeaconHost()
{
	return HostObject;
}
