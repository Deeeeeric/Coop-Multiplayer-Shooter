// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameState() {}
// Cross Module References
	COOPSHOOTER_API UEnum* Z_Construct_UEnum_CoopShooter_ERoundState();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASGameState_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
// End Cross Module References
	static UEnum* ERoundState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoopShooter_ERoundState, Z_Construct_UPackage__Script_CoopShooter(), TEXT("ERoundState"));
		}
		return Singleton;
	}
	template<> COOPSHOOTER_API UEnum* StaticEnum<ERoundState>()
	{
		return ERoundState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoundState(ERoundState_StaticEnum, TEXT("/Script/CoopShooter"), TEXT("ERoundState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoopShooter_ERoundState_Hash() { return 3831468785U; }
	UEnum* Z_Construct_UEnum_CoopShooter_ERoundState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoopShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoundState"), 0, Get_Z_Construct_UEnum_CoopShooter_ERoundState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERoundState::RoundStart", (int64)ERoundState::RoundStart },
				{ "ERoundState::RoundInProgress", (int64)ERoundState::RoundInProgress },
				{ "ERoundState::RoundFinish", (int64)ERoundState::RoundFinish },
				{ "ERoundState::GameOver", (int64)ERoundState::GameOver },
				{ "ERoundState::Win", (int64)ERoundState::Win },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameOver.Comment", "// Player Lost\n" },
				{ "GameOver.Name", "ERoundState::GameOver" },
				{ "GameOver.ToolTip", "Player Lost" },
				{ "ModuleRelativePath", "Public/SGameState.h" },
				{ "RoundFinish.Comment", "// Player has won\n" },
				{ "RoundFinish.Name", "ERoundState::RoundFinish" },
				{ "RoundFinish.ToolTip", "Player has won" },
				{ "RoundInProgress.Comment", "// Players still alive\n" },
				{ "RoundInProgress.Name", "ERoundState::RoundInProgress" },
				{ "RoundInProgress.ToolTip", "Players still alive" },
				{ "RoundStart.Comment", "// Waiting for round to start\n" },
				{ "RoundStart.Name", "ERoundState::RoundStart" },
				{ "RoundStart.ToolTip", "Waiting for round to start" },
				{ "Win.Comment", "// Player Won\n" },
				{ "Win.Name", "ERoundState::Win" },
				{ "Win.ToolTip", "Player Won" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoopShooter,
				nullptr,
				"ERoundState",
				"ERoundState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ASGameState::execOnRep_RoundState)
	{
		P_GET_ENUM(ERoundState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RoundState(ERoundState(Z_Param_OldState));
		P_NATIVE_END;
	}
	static FName NAME_ASGameState_RoundStateChanged = FName(TEXT("RoundStateChanged"));
	void ASGameState::RoundStateChanged(ERoundState NewState, ERoundState OldState)
	{
		SGameState_eventRoundStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		ProcessEvent(FindFunctionChecked(NAME_ASGameState_RoundStateChanged),&Parms);
	}
	void ASGameState::StaticRegisterNativesASGameState()
	{
		UClass* Class = ASGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_RoundState", &ASGameState::execOnRep_RoundState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics
	{
		struct SGameState_eventOnRep_RoundState_Parms
		{
			ERoundState OldState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventOnRep_RoundState_Parms, OldState), Z_Construct_UEnum_CoopShooter_ERoundState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::NewProp_OldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "OnRep_RoundState", nullptr, nullptr, sizeof(SGameState_eventOnRep_RoundState_Parms), Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_OnRep_RoundState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_OnRep_RoundState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventRoundStateChanged_Parms, OldState), Z_Construct_UEnum_CoopShooter_ERoundState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventRoundStateChanged_Parms, NewState), Z_Construct_UEnum_CoopShooter_ERoundState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "RoundStateChanged", nullptr, nullptr, sizeof(SGameState_eventRoundStateChanged_Parms), Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_RoundStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_RoundStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameState_NoRegister()
	{
		return ASGameState::StaticClass();
	}
	struct Z_Construct_UClass_ASGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoundState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameState_OnRep_RoundState, "OnRep_RoundState" }, // 1886660589
		{ &Z_Construct_UFunction_ASGameState_RoundStateChanged, "RoundStateChanged" }, // 74499646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SGameState.h" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Comment", "//Replicated Specifier used to mark this variable to replicate\n" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
		{ "ToolTip", "Replicated Specifier used to mark this variable to replicate" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "// Keep track of current playing state\n" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
		{ "ToolTip", "Keep track of current playing state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState = { "RoundState", "OnRep_RoundState", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, RoundState), Z_Construct_UEnum_CoopShooter_ERoundState, METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_RoundState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameState_Statics::ClassParams = {
		&ASGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameState, 390478485);
	template<> COOPSHOOTER_API UClass* StaticClass<ASGameState>()
	{
		return ASGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameState(Z_Construct_UClass_ASGameState, &ASGameState::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASGameState"), false, nullptr, nullptr, nullptr);

	void ASGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RoundState(TEXT("RoundState"));
		static const FName Name_PlayerScore(TEXT("PlayerScore"));

		const bool bIsValid = true
			&& Name_RoundState == ClassReps[(int32)ENetFields_Private::RoundState].Property->GetFName()
			&& Name_PlayerScore == ClassReps[(int32)ENetFields_Private::PlayerScore].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
