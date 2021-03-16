// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameInstance() {}
// Cross Module References
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_USGameInstance_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_USGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics
	{
		struct _Script_CoopShooter_eventPlayerArrayChanged_Parms
		{
			APlayerState* PlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopShooter_eventPlayerArrayChanged_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event hook for any time a player is added/removed (triggers via GameState)\n" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ToolTip", "Event hook for any time a player is added/removed (triggers via GameState)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopShooter, nullptr, "PlayerArrayChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_CoopShooter_eventPlayerArrayChanged_Parms), Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USGameInstance::StaticRegisterNativesUSGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USGameInstance_NoRegister()
	{
		return USGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SGameInstance.h" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateRemoved_MetaData[] = {
		{ "Category", "Game|Events" },
		{ "Comment", "/* Existing Player left (runs on clients and server) */" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ToolTip", "Existing Player left (runs on clients and server)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateRemoved = { "OnPlayerStateRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USGameInstance, OnPlayerStateRemoved), Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateAdded_MetaData[] = {
		{ "Category", "Game|Events" },
		{ "Comment", "/* New Player joined (runs on clients and server) */" },
		{ "ModuleRelativePath", "Public/SGameInstance.h" },
		{ "ToolTip", "New Player joined (runs on clients and server)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateAdded = { "OnPlayerStateAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USGameInstance, OnPlayerStateAdded), Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateAdded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGameInstance_Statics::NewProp_OnPlayerStateAdded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGameInstance_Statics::ClassParams = {
		&USGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGameInstance, 4115985525);
	template<> COOPSHOOTER_API UClass* StaticClass<USGameInstance>()
	{
		return USGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGameInstance(Z_Construct_UClass_USGameInstance, &USGameInstance::StaticClass, TEXT("/Script/CoopShooter"), TEXT("USGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
