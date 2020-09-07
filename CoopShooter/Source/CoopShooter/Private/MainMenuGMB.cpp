// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGMB.h"
#include "SOnlineBeaconHostObject.h"
#include "OnlineBeaconHost.h"


AMainMenuGMB::AMainMenuGMB()
{
	HostObject = nullptr;
}

bool AMainMenuGMB::CreateHostBeacon()
{
	if (AOnlineBeaconHost* Host = GetWorld()->SpawnActor<AOnlineBeaconHost>(AOnlineBeaconHost::StaticClass()))
	{
		if (Host->InitHost())
		{
			Host->PauseBeaconRequests(false);

			HostObject = GetWorld()->SpawnActor<ASOnlineBeaconHostObject>(ASOnlineBeaconHostObject::StaticClass());
			if (HostObject)
			{
				Host->RegisterHost(HostObject);
				return true;
			}
		}
	}
	return false;
}
