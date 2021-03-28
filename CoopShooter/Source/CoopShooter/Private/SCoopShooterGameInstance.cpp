// Fill out your copyright notice in the Description page of Project Settings.


#include "SCoopShooterGameInstance.h"
#include "Engine/World.h"
#include "JsonObjectConverter.h"

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
	Request->SetVerb("GET"); //Verb to POST
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

		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ResponseStr);

		// Deserialize
		if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
		{
			// Make array of TSharedPtr<FJsonValue> and get array field "Response" from JsonObject
			TArray<TSharedPtr<FJsonValue>> JsonValues = JsonObject->GetArrayField(TEXT("Response"));
			TArray<FServerData> ServerList;

			for (TSharedPtr<FJsonValue> Value : JsonValues)
			{
				FServerData ServerData = FServerData();
				TSharedPtr<FJsonObject> JsonObj = Value->AsObject();
				
				if (FJsonObjectConverter::JsonObjectToUStruct(JsonObject.ToSharedRef(), &ServerData, 0, 0))
				{
					UE_LOG(LogTemp, Warning, TEXT("JSONOBJECTTOUSTRUCT SUCCESS"));
					ServerList.Add(ServerData);

				}
			}
		}

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GETSERVERLIST FAILED"));
	}
}

