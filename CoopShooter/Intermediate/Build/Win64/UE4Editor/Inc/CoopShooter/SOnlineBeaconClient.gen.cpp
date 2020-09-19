// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/SOnlineBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOnlineBeaconClient() {}
// Cross Module References
	COOPSHOOTER_API UFunction* Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconClient_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics
	{
		struct _Script_CoopShooter_eventConnectSuccess_Parms
		{
			bool FConnected;
		};
		static void NewProp_FConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::NewProp_FConnected_SetBit(void* Obj)
	{
		((_Script_CoopShooter_eventConnectSuccess_Parms*)Obj)->FConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::NewProp_FConnected = { "FConnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_CoopShooter_eventConnectSuccess_Parms), &Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::NewProp_FConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::NewProp_FConnected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopShooter, nullptr, "ConnectSuccess__DelegateSignature", nullptr, nullptr, sizeof(_Script_CoopShooter_eventConnectSuccess_Parms), Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ASOnlineBeaconClient::execLeaveLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOnlineBeaconClient::execConnectToServerHost)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectToServerHost(Z_Param_Address);
		P_NATIVE_END;
	}
	void ASOnlineBeaconClient::StaticRegisterNativesASOnlineBeaconClient()
	{
		UClass* Class = ASOnlineBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToServerHost", &ASOnlineBeaconClient::execConnectToServerHost },
			{ "LeaveLobby", &ASOnlineBeaconClient::execLeaveLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics
	{
		struct SOnlineBeaconClient_eventConnectToServerHost_Parms
		{
			FString Address;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SOnlineBeaconClient_eventConnectToServerHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SOnlineBeaconClient_eventConnectToServerHost_Parms), &Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SOnlineBeaconClient_eventConnectToServerHost_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOnlineBeaconClient, nullptr, "ConnectToServerHost", nullptr, nullptr, sizeof(SOnlineBeaconClient_eventConnectToServerHost_Parms), Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOnlineBeaconClient, nullptr, "LeaveLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASOnlineBeaconClient_NoRegister()
	{
		return ASOnlineBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ASOnlineBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASOnlineBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASOnlineBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASOnlineBeaconClient_ConnectToServerHost, "ConnectToServerHost" }, // 3377222918
		{ &Z_Construct_UFunction_ASOnlineBeaconClient_LeaveLobby, "LeaveLobby" }, // 727333084
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOnlineBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SOnlineBeaconClient.h" },
		{ "ModuleRelativePath", "Public/SOnlineBeaconClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOnlineBeaconClient_Statics::NewProp_FConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOnlineBeaconClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASOnlineBeaconClient_Statics::NewProp_FConnected = { "FConnected", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASOnlineBeaconClient, FConnected), Z_Construct_UDelegateFunction_CoopShooter_ConnectSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASOnlineBeaconClient_Statics::NewProp_FConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOnlineBeaconClient_Statics::NewProp_FConnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASOnlineBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOnlineBeaconClient_Statics::NewProp_FConnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASOnlineBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOnlineBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASOnlineBeaconClient_Statics::ClassParams = {
		&ASOnlineBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASOnlineBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASOnlineBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASOnlineBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASOnlineBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASOnlineBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASOnlineBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASOnlineBeaconClient, 3804278321);
	template<> COOPSHOOTER_API UClass* StaticClass<ASOnlineBeaconClient>()
	{
		return ASOnlineBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASOnlineBeaconClient(Z_Construct_UClass_ASOnlineBeaconClient, &ASOnlineBeaconClient::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASOnlineBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASOnlineBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
