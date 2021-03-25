// Fill out your copyright notice in the Description page of Project Settings.


#include "SCoopShooterGameInstance.h"
#include "Engine/World.h"

USCoopShooterGameInstance::USCoopShooterGameInstance()
{
	Http = &FHttpModule::Get();
}

void USCoopShooterGameInstance::GetServerList()
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();

	//Bind requests
	Request->OnProcessRequestComplete().BindUObject(this, &USCoopShooterGameInstance::OnServerListRequestComplete);

	Request->SetURL("https://localhost:44311/api/Host"); //Request URL to api URL
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json")); //Content-type header to application/json
	
	Request->ProcessRequest();
}

void USCoopShooterGameInstance::OnServerListRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool Success)
{
	if (Success)
	{
		FString ResponseStr = Response->GetContentAsString();
		ResponseStr.InsertAt(0, FString("{\"Response\":"));
		ResponseStr.AppendChar('}');

		UE_LOG(LogTemp, Warning, TEXT("Response: %s"), *ResponseStr);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GETSERVERLIST FAILED"));
	}
}

