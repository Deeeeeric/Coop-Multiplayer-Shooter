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
	void ASOnlineBeaconHostObject::StaticRegisterNativesASOnlineBeaconHostObject()
	{
	}
	UClass* Z_Construct_UClass_ASOnlineBeaconHostObject_NoRegister()
	{
		return ASOnlineBeaconHostObject::StaticClass();
	}
	struct Z_Construct_UClass_ASOnlineBeaconHostObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ASOnlineBeaconHostObject, 1832882770);
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
