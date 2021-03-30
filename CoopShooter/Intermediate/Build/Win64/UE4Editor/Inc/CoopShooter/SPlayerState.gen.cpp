// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerState() {}
// Cross Module References
	COOPSHOOTER_API UEnum* Z_Construct_UEnum_CoopShooter_ETeam();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASPlayerState_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
// End Cross Module References
	static UEnum* ETeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoopShooter_ETeam, Z_Construct_UPackage__Script_CoopShooter(), TEXT("ETeam"));
		}
		return Singleton;
	}
	template<> COOPSHOOTER_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeam(ETeam_StaticEnum, TEXT("/Script/CoopShooter"), TEXT("ETeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoopShooter_ETeam_Hash() { return 2366385330U; }
	UEnum* Z_Construct_UEnum_CoopShooter_ETeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoopShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeam"), 0, Get_Z_Construct_UEnum_CoopShooter_ETeam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeam::None", (int64)ETeam::None },
				{ "ETeam::Alpha", (int64)ETeam::Alpha },
				{ "ETeam::Bravo", (int64)ETeam::Bravo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.\"Alpha\"", "" },
				{ "Alpha.Comment", "// Default\n" },
				{ "Alpha.DisplayName", "" },
				{ "Alpha.Name", "ETeam::Alpha" },
				{ "Alpha.ToolTip", "Default" },
				{ "BlueprintType", "true" },
				{ "Bravo.\"Bravo\"", "" },
				{ "Bravo.DisplayName", "" },
				{ "Bravo.Name", "ETeam::Bravo" },
				{ "Comment", "/* Set up teams*/" },
				{ "ModuleRelativePath", "Public/SPlayerState.h" },
				{ "None.\"None\"", "" },
				{ "None.DisplayName", "" },
				{ "None.Name", "ETeam::None" },
				{ "ToolTip", "Set up teams" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoopShooter,
				nullptr,
				"ETeam",
				"ETeam",
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
	DEFINE_FUNCTION(ASPlayerState::execSetTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_JoinTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTeam(ETeam(Z_Param_JoinTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerState::execGetDeaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDeaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerState::execGetKills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerState::execGetTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
		P_NATIVE_END;
	}
	void ASPlayerState::StaticRegisterNativesASPlayerState()
	{
		UClass* Class = ASPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeaths", &ASPlayerState::execGetDeaths },
			{ "GetKills", &ASPlayerState::execGetKills },
			{ "GetTeam", &ASPlayerState::execGetTeam },
			{ "SetTeam", &ASPlayerState::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics
	{
		struct SPlayerState_eventGetDeaths_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventGetDeaths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "GetDeaths", nullptr, nullptr, sizeof(SPlayerState_eventGetDeaths_Parms), Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_GetDeaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerState_GetKills_Statics
	{
		struct SPlayerState_eventGetKills_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASPlayerState_GetKills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventGetKills_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_GetKills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetKills_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_GetKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_GetKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "GetKills", nullptr, nullptr, sizeof(SPlayerState_eventGetKills_Parms), Z_Construct_UFunction_ASPlayerState_GetKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_GetKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_GetKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_GetKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerState_GetTeam_Statics
	{
		struct SPlayerState_eventGetTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_CoopShooter_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "GetTeam", nullptr, nullptr, sizeof(SPlayerState_eventGetTeam_Parms), Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerState_SetTeam_Statics
	{
		struct SPlayerState_eventSetTeam_Parms
		{
			ETeam JoinTeam;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinTeam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinTeam_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SPlayerState_eventSetTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPlayerState_eventSetTeam_Parms), &Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_JoinTeam = { "JoinTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventSetTeam_Parms, JoinTeam), Z_Construct_UEnum_CoopShooter_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_JoinTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_JoinTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::NewProp_JoinTeam_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns true if join was successful\n" },
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
		{ "ToolTip", "Returns true if join was successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "SetTeam", nullptr, nullptr, sizeof(SPlayerState_eventSetTeam_Parms), Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerState_NoRegister()
	{
		return ASPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Deaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerState_GetDeaths, "GetDeaths" }, // 4110472804
		{ &Z_Construct_UFunction_ASPlayerState_GetKills, "GetKills" }, // 2868098327
		{ &Z_Construct_UFunction_ASPlayerState_GetTeam, "GetTeam" }, // 3191079982
		{ &Z_Construct_UFunction_ASPlayerState_SetTeam, "SetTeam" }, // 2399041512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SPlayerState.h" },
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::NewProp_Deaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerState, Deaths), METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::NewProp_Deaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::NewProp_Deaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::NewProp_Kills_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerState, Kills), METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::NewProp_Kills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerState, Team), Z_Construct_UEnum_CoopShooter_ETeam, METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_Deaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_Team_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerState_Statics::ClassParams = {
		&ASPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerState, 4187622033);
	template<> COOPSHOOTER_API UClass* StaticClass<ASPlayerState>()
	{
		return ASPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerState(Z_Construct_UClass_ASPlayerState, &ASPlayerState::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASPlayerState"), false, nullptr, nullptr, nullptr);

	void ASPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Team(TEXT("Team"));
		static const FName Name_Kills(TEXT("Kills"));
		static const FName Name_Deaths(TEXT("Deaths"));

		const bool bIsValid = true
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName()
			&& Name_Kills == ClassReps[(int32)ENetFields_Private::Kills].Property->GetFName()
			&& Name_Deaths == ClassReps[(int32)ENetFields_Private::Deaths].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
