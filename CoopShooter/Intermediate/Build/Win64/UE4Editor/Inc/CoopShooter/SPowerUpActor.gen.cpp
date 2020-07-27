// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SPowerUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerUpActor() {}
// Cross Module References
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASPowerUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
// End Cross Module References
	DEFINE_FUNCTION(ASPowerUpActor::execOnTickPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPowerup();
		P_NATIVE_END;
	}
	static FName NAME_ASPowerUpActor_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerUpActor::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnActivated),NULL);
	}
	static FName NAME_ASPowerUpActor_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerUpActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnExpired),NULL);
	}
	static FName NAME_ASPowerUpActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerUpActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnPowerupTicked),NULL);
	}
	void ASPowerUpActor::StaticRegisterNativesASPowerUpActor()
	{
		UClass* Class = ASPowerUpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTickPowerup", &ASPowerUpActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPowerUpActor_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerUpActor_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerUpActor_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerUpActor_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerUpActor_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerUpActor_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerUpActor_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerUpActor_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, nullptr, "OnExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerUpActor_OnExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerUpActor_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, nullptr, "OnPowerupTicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, nullptr, "OnTickPowerup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister()
	{
		return ASPowerUpActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNumOfTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNumOfTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPowerUpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPowerUpActor_OnActivated, "OnActivated" }, // 441108780
		{ &Z_Construct_UFunction_ASPowerUpActor_OnExpired, "OnExpired" }, // 3746327724
		{ &Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked, "OnPowerupTicked" }, // 1955833767
		{ &Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup, "OnTickPowerup" }, // 1617455939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerUpActor.h" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_TotalNumOfTicks_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "// Total times we apply the powerup effect\n" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
		{ "ToolTip", "Total times we apply the powerup effect" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_TotalNumOfTicks = { "TotalNumOfTicks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerUpActor, TotalNumOfTicks), METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_TotalNumOfTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_TotalNumOfTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerupInterval_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "// time etween powerup ticks\n" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
		{ "ToolTip", "time etween powerup ticks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerUpActor, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerupInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerupInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerUpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_TotalNumOfTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_PowerupInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerUpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerUpActor_Statics::ClassParams = {
		&ASPowerUpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPowerUpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerUpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerUpActor, 760957172);
	template<> COOPSHOOTER_API UClass* StaticClass<ASPowerUpActor>()
	{
		return ASPowerUpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerUpActor(Z_Construct_UClass_ASPowerUpActor, &ASPowerUpActor::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASPowerUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
