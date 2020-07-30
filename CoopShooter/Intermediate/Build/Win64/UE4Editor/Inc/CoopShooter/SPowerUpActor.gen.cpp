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
	DEFINE_FUNCTION(ASPowerUpActor::execOnRep_PowerupActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PowerupActive();
		P_NATIVE_END;
	}
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
	static FName NAME_ASPowerUpActor_OnPowerupStateChange = FName(TEXT("OnPowerupStateChange"));
	void ASPowerUpActor::OnPowerupStateChange(bool bNewIsActive)
	{
		SPowerUpActor_eventOnPowerupStateChange_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnPowerupStateChange),&Parms);
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
			{ "OnRep_PowerupActive", &ASPowerUpActor::execOnRep_PowerupActive },
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
	struct Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics
	{
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((SPowerUpActor_eventOnPowerupStateChange_Parms*)Obj)->bNewIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPowerUpActor_eventOnPowerupStateChange_Parms), &Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "Comment", "// use blueprint to reply to boolean change\n" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
		{ "ToolTip", "use blueprint to reply to boolean change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, nullptr, "OnPowerupStateChange", nullptr, nullptr, sizeof(SPowerUpActor_eventOnPowerupStateChange_Parms), Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, nullptr, "OnRep_PowerupActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerupActive_MetaData[];
#endif
		static void NewProp_bIsPowerupActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerupActive;
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
		{ &Z_Construct_UFunction_ASPowerUpActor_OnPowerupStateChange, "OnPowerupStateChange" }, // 2301092935
		{ &Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked, "OnPowerupTicked" }, // 1955833767
		{ &Z_Construct_UFunction_ASPowerUpActor_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 3186076532
		{ &Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup, "OnTickPowerup" }, // 1617455939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerUpActor.h" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive_MetaData[] = {
		{ "Comment", "// Keeps state of the powerup\n" },
		{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
		{ "ToolTip", "Keeps state of the powerup" },
	};
#endif
	void Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive_SetBit(void* Obj)
	{
		((ASPowerUpActor*)Obj)->bIsPowerupActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive = { "bIsPowerupActive", "OnRep_PowerupActive", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPowerUpActor), &Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerUpActor_Statics::NewProp_bIsPowerupActive,
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
	IMPLEMENT_CLASS(ASPowerUpActor, 3537459853);
	template<> COOPSHOOTER_API UClass* StaticClass<ASPowerUpActor>()
	{
		return ASPowerUpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerUpActor(Z_Construct_UClass_ASPowerUpActor, &ASPowerUpActor::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASPowerUpActor"), false, nullptr, nullptr, nullptr);

	void ASPowerUpActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsPowerupActive(TEXT("bIsPowerupActive"));

		const bool bIsValid = true
			&& Name_bIsPowerupActive == ClassReps[(int32)ENetFields_Private::bIsPowerupActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPowerUpActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
