// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SCoopShooterGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCoopShooterGameInstance() {}
// Cross Module References
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_USCoopShooterGameInstance_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_USCoopShooterGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopShooter, nullptr, "ServersReceived__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
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
	DEFINE_FUNCTION(USCoopShooterGameInstance::execGetServerList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerList();
		P_NATIVE_END;
	}
	void USCoopShooterGameInstance::StaticRegisterNativesUSCoopShooterGameInstance()
	{
		UClass* Class = USCoopShooterGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServerList", &USCoopShooterGameInstance::execGetServerList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCoopShooterGameInstance, nullptr, "GetServerList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USCoopShooterGameInstance_NoRegister()
	{
		return USCoopShooterGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USCoopShooterGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOnServersReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FOnServersReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USCoopShooterGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USCoopShooterGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USCoopShooterGameInstance_GetServerList, "GetServerList" }, // 1021841823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCoopShooterGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SCoopShooterGameInstance.h" },
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateRemoved_MetaData[] = {
		{ "Category", "Game|Events" },
		{ "Comment", "/* Existing Player left (runs on clients and server) */" },
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
		{ "ToolTip", "Existing Player left (runs on clients and server)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateRemoved = { "OnPlayerStateRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCoopShooterGameInstance, OnPlayerStateRemoved), Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateAdded_MetaData[] = {
		{ "Category", "Game|Events" },
		{ "Comment", "/* New Player joined (runs on clients and server) */" },
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
		{ "ToolTip", "New Player joined (runs on clients and server)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateAdded = { "OnPlayerStateAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCoopShooterGameInstance, OnPlayerStateAdded), Z_Construct_UDelegateFunction_CoopShooter_PlayerArrayChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_FOnServersReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCoopShooterGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_FOnServersReceived = { "FOnServersReceived", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCoopShooterGameInstance, FOnServersReceived), Z_Construct_UDelegateFunction_CoopShooter_ServersReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_FOnServersReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_FOnServersReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCoopShooterGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_OnPlayerStateAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCoopShooterGameInstance_Statics::NewProp_FOnServersReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USCoopShooterGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCoopShooterGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USCoopShooterGameInstance_Statics::ClassParams = {
		&USCoopShooterGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USCoopShooterGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USCoopShooterGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USCoopShooterGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USCoopShooterGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USCoopShooterGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USCoopShooterGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USCoopShooterGameInstance, 741719888);
	template<> COOPSHOOTER_API UClass* StaticClass<USCoopShooterGameInstance>()
	{
		return USCoopShooterGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USCoopShooterGameInstance(Z_Construct_UClass_USCoopShooterGameInstance, &USCoopShooterGameInstance::StaticClass, TEXT("/Script/CoopShooter"), TEXT("USCoopShooterGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USCoopShooterGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
