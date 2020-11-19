// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SOnlineBeaconHostObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOnlineBeaconHostObject() {}
// Cross Module References
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COOPSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FCoopShooterLobbyInfo();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconHostObject_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics
	{
		struct _Script_CoopShooter_eventHostLobbyUpdated_Parms
		{
			FCoopShooterLobbyInfo FOnHostLobbyUpdated;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FOnHostLobbyUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::NewProp_FOnHostLobbyUpdated = { "FOnHostLobbyUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopShooter_eventHostLobbyUpdated_Parms, FOnHostLobbyUpdated), Z_Construct_UScriptStruct_FCoopShooterLobbyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::NewProp_FOnHostLobbyUpdated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopShooter, nullptr, "HostLobbyUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_CoopShooter_eventHostLobbyUpdated_Parms), Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FCoopShooterLobbyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOPSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoopShooterLobbyInfo, Z_Construct_UPackage__Script_CoopShooter(), TEXT("CoopShooterLobbyInfo"), sizeof(FCoopShooterLobbyInfo), Get_Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Hash());
	}
	return Singleton;
}
template<> COOPSHOOTER_API UScriptStruct* StaticStruct<FCoopShooterLobbyInfo>()
{
	return FCoopShooterLobbyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoopShooterLobbyInfo(FCoopShooterLobbyInfo::StaticStruct, TEXT("/Script/CoopShooter"), TEXT("CoopShooterLobbyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CoopShooter_StaticRegisterNativesFCoopShooterLobbyInfo
{
	FScriptStruct_CoopShooter_StaticRegisterNativesFCoopShooterLobbyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CoopShooterLobbyInfo")),new UScriptStruct::TCppStructOps<FCoopShooterLobbyInfo>);
	}
} ScriptStruct_CoopShooter_StaticRegisterNativesFCoopShooterLobbyInfo;
	struct Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoopShooterLobbyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList_MetaData[] = {
		{ "Category", "CoopShooterLobbyInfo" },
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList = { "PlayerList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoopShooterLobbyInfo, PlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList_Inner = { "PlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::NewProp_PlayerList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
		nullptr,
		&NewStructOps,
		"CoopShooterLobbyInfo",
		sizeof(FCoopShooterLobbyInfo),
		alignof(FCoopShooterLobbyInfo),
		Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoopShooterLobbyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CoopShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CoopShooterLobbyInfo"), sizeof(FCoopShooterLobbyInfo), Get_Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Hash() { return 2853635064U; }
	DEFINE_FUNCTION(ASOnlineBeaconHostObject::execShutdownServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShutdownServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOnlineBeaconHostObject::execDisconnectAllClients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectAllClients();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOnlineBeaconHostObject::execUpdateLobbyInfo)
	{
		P_GET_STRUCT(FCoopShooterLobbyInfo,Z_Param_NewLobbyInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLobbyInfo(Z_Param_NewLobbyInfo);
		P_NATIVE_END;
	}
	void ASOnlineBeaconHostObject::StaticRegisterNativesASOnlineBeaconHostObject()
	{
		UClass* Class = ASOnlineBeaconHostObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectAllClients", &ASOnlineBeaconHostObject::execDisconnectAllClients },
			{ "ShutdownServer", &ASOnlineBeaconHostObject::execShutdownServer },
			{ "UpdateLobbyInfo", &ASOnlineBeaconHostObject::execUpdateLobbyInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOnlineBeaconHostObject, nullptr, "DisconnectAllClients", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOnlineBeaconHostObject, nullptr, "ShutdownServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics
	{
		struct SOnlineBeaconHostObject_eventUpdateLobbyInfo_Parms
		{
			FCoopShooterLobbyInfo NewLobbyInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLobbyInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::NewProp_NewLobbyInfo = { "NewLobbyInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SOnlineBeaconHostObject_eventUpdateLobbyInfo_Parms, NewLobbyInfo), Z_Construct_UScriptStruct_FCoopShooterLobbyInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::NewProp_NewLobbyInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOnlineBeaconHostObject, nullptr, "UpdateLobbyInfo", nullptr, nullptr, sizeof(SOnlineBeaconHostObject_eventUpdateLobbyInfo_Parms), Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASOnlineBeaconHostObject_NoRegister()
	{
		return ASOnlineBeaconHostObject::StaticClass();
	}
	struct Z_Construct_UClass_ASOnlineBeaconHostObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOnHostLobbyUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FOnHostLobbyUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASOnlineBeaconHostObject_DisconnectAllClients, "DisconnectAllClients" }, // 1802026208
		{ &Z_Construct_UFunction_ASOnlineBeaconHostObject_ShutdownServer, "ShutdownServer" }, // 807250003
		{ &Z_Construct_UFunction_ASOnlineBeaconHostObject_UpdateLobbyInfo, "UpdateLobbyInfo" }, // 741659154
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SOnlineBeaconHostObject.h" },
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::NewProp_FOnHostLobbyUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::NewProp_FOnHostLobbyUpdated = { "FOnHostLobbyUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASOnlineBeaconHostObject, FOnHostLobbyUpdated), Z_Construct_UDelegateFunction_CoopShooter_HostLobbyUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::NewProp_FOnHostLobbyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::NewProp_FOnHostLobbyUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::NewProp_FOnHostLobbyUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOnlineBeaconHostObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::ClassParams = {
		&ASOnlineBeaconHostObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASOnlineBeaconHostObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASOnlineBeaconHostObject, 702461431);
	template<> COOPSHOOTER_API UClass* StaticClass<ASOnlineBeaconHostObject>()
	{
		return ASOnlineBeaconHostObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASOnlineBeaconHostObject(Z_Construct_UClass_ASOnlineBeaconHostObject, &ASOnlineBeaconHostObject::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASOnlineBeaconHostObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASOnlineBeaconHostObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
