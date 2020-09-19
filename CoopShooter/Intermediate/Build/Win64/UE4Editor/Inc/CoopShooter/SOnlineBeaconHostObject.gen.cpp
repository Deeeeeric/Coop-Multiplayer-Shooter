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
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconHostObject_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
// End Cross Module References
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
	void ASOnlineBeaconHostObject::StaticRegisterNativesASOnlineBeaconHostObject()
	{
		UClass* Class = ASOnlineBeaconHostObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectAllClients", &ASOnlineBeaconHostObject::execDisconnectAllClients },
			{ "ShutdownServer", &ASOnlineBeaconHostObject::execShutdownServer },
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
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SOnlineBeaconHostObject.h" },
		{ "ModuleRelativePath", "Public/SOnlineBeaconHostObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOnlineBeaconHostObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASOnlineBeaconHostObject_Statics::ClassParams = {
		&ASOnlineBeaconHostObject::StaticClass,
		"Engine",
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
	IMPLEMENT_CLASS(ASOnlineBeaconHostObject, 3002988349);
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
