// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopShooter_init() {}
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_OnActorKilled__DelegateSignature();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_OnHealthChangedSignature__DelegateSignature();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_Disconnected__DelegateSignature();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_LobbyUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooter()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_OnActorKilled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_Disconnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooter_LobbyUpdated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoopShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6B8A5B0F,
				0x500C3F32,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
