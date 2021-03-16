// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/MainMenuGMB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGMB() {}
// Cross Module References
	COOPSHOOTER_API UClass* Z_Construct_UClass_AMainMenuGMB_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_AMainMenuGMB();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconHostObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainMenuGMB::execGetBeaconHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASOnlineBeaconHostObject**)Z_Param__Result=P_THIS->GetBeaconHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainMenuGMB::execCreateHostBeacon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateHostBeacon();
		P_NATIVE_END;
	}
	void AMainMenuGMB::StaticRegisterNativesAMainMenuGMB()
	{
		UClass* Class = AMainMenuGMB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHostBeacon", &AMainMenuGMB::execCreateHostBeacon },
			{ "GetBeaconHost", &AMainMenuGMB::execGetBeaconHost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics
	{
		struct MainMenuGMB_eventCreateHostBeacon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainMenuGMB_eventCreateHostBeacon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainMenuGMB_eventCreateHostBeacon_Parms), &Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuGMB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGMB, nullptr, "CreateHostBeacon", nullptr, nullptr, sizeof(MainMenuGMB_eventCreateHostBeacon_Parms), Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics
	{
		struct MainMenuGMB_eventGetBeaconHost_Parms
		{
			ASOnlineBeaconHostObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuGMB_eventGetBeaconHost_Parms, ReturnValue), Z_Construct_UClass_ASOnlineBeaconHostObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuGMB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGMB, nullptr, "GetBeaconHost", nullptr, nullptr, sizeof(MainMenuGMB_eventGetBeaconHost_Parms), Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainMenuGMB_NoRegister()
	{
		return AMainMenuGMB::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGMB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGMB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainMenuGMB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainMenuGMB_CreateHostBeacon, "CreateHostBeacon" }, // 4258202234
		{ &Z_Construct_UFunction_AMainMenuGMB_GetBeaconHost, "GetBeaconHost" }, // 2651306186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGMB_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuGMB.h" },
		{ "ModuleRelativePath", "Public/MainMenuGMB.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGMB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGMB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGMB_Statics::ClassParams = {
		&AMainMenuGMB::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGMB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGMB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGMB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuGMB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuGMB, 1312563670);
	template<> COOPSHOOTER_API UClass* StaticClass<AMainMenuGMB>()
	{
		return AMainMenuGMB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuGMB(Z_Construct_UClass_AMainMenuGMB, &AMainMenuGMB::StaticClass, TEXT("/Script/CoopShooter"), TEXT("AMainMenuGMB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGMB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
