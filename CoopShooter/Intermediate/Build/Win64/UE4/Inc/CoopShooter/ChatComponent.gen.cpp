// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/Public/ChatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatComponent() {}
// Cross Module References
	COOPSHOOTER_API UClass* Z_Construct_UClass_UChatComponent_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_UChatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
// End Cross Module References
	void UChatComponent::StaticRegisterNativesUChatComponent()
	{
	}
	UClass* Z_Construct_UClass_UChatComponent_NoRegister()
	{
		return UChatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ChatComponent.h" },
		{ "ModuleRelativePath", "Public/ChatComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChatComponent_Statics::ClassParams = {
		&UChatComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChatComponent, 1355743921);
	template<> COOPSHOOTER_API UClass* StaticClass<UChatComponent>()
	{
		return UChatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChatComponent(Z_Construct_UClass_UChatComponent, &UChatComponent::StaticClass, TEXT("/Script/CoopShooter"), TEXT("UChatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
