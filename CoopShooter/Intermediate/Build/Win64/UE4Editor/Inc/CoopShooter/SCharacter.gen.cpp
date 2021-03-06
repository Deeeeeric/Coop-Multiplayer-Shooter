// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopShooter/SCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CoopShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPSHOOTER_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOPSHOOTER_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASCharacter::execOnHealthChanged)
	{
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execServerSetSprinting)
	{
		P_GET_UBOOL(Z_Param_NewSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetSprinting_Validate(Z_Param_NewSprinting))
		{
			RPC_ValidateFailed(TEXT("ServerSetSprinting_Validate"));
			return;
		}
		P_THIS->ServerSetSprinting_Implementation(Z_Param_NewSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execGetAimOffsets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets();
		P_NATIVE_END;
	}
	static FName NAME_ASCharacter_ServerSetSprinting = FName(TEXT("ServerSetSprinting"));
	void ASCharacter::ServerSetSprinting(bool NewSprinting)
	{
		SCharacter_eventServerSetSprinting_Parms Parms;
		Parms.NewSprinting=NewSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerSetSprinting),&Parms);
	}
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAimOffsets", &ASCharacter::execGetAimOffsets },
			{ "IsSprinting", &ASCharacter::execIsSprinting },
			{ "OnHealthChanged", &ASCharacter::execOnHealthChanged },
			{ "ServerSetSprinting", &ASCharacter::execServerSetSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics
	{
		struct SCharacter_eventGetAimOffsets_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventGetAimOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/* Retrieve Pitch/Yaw from current camera */" },
		{ "ModuleRelativePath", "SCharacter.h" },
		{ "ToolTip", "Retrieve Pitch/Yaw from current camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "GetAimOffsets", nullptr, nullptr, sizeof(SCharacter_eventGetAimOffsets_Parms), Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetAimOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetAimOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsSprinting_Statics
	{
		struct SCharacter_eventIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SCharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "IsSprinting", nullptr, nullptr, sizeof(SCharacter_eventIsSprinting_Parms), Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics
	{
		struct SCharacter_eventOnHealthChanged_Parms
		{
			USHealthComponent* OwningHealthComponent;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComponent = { "OwningHealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, OwningHealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::NewProp_OwningHealthComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(SCharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics
	{
		static void NewProp_NewSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting_SetBit(void* Obj)
	{
		((SCharacter_eventServerSetSprinting_Parms*)Obj)->NewSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting = { "NewSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SCharacter_eventServerSetSprinting_Parms), &Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Server side call to update actual sprint state */" },
		{ "ModuleRelativePath", "SCharacter.h" },
		{ "ToolTip", "Server side call to update actual sprint state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "ServerSetSprinting", nullptr, nullptr, sizeof(SCharacter_eventServerSetSprinting_Parms), Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_ServerSetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_ServerSetSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[];
#endif
		static void NewProp_bDied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToADS_MetaData[];
#endif
		static void NewProp_bWantsToADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADS_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADS_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToSprint_MetaData[];
#endif
		static void NewProp_bWantsToSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadedAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCharacter_GetAimOffsets, "GetAimOffsets" }, // 3804233154
		{ &Z_Construct_UFunction_ASCharacter_IsSprinting, "IsSprinting" }, // 3130421689
		{ &Z_Construct_UFunction_ASCharacter_OnHealthChanged, "OnHealthChanged" }, // 522563183
		{ &Z_Construct_UFunction_ASCharacter_ServerSetSprinting, "ServerSetSprinting" }, // 3185146401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "// Pawn died previously\n" },
		{ "ModuleRelativePath", "SCharacter.h" },
		{ "ToolTip", "Pawn died previously" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bDied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied = { "bDied", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName = { "WeaponAttachSocketName", nullptr, (EPropertyFlags)0x0020080000030001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_StarterWeaponClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_StarterWeaponClass = { "StarterWeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, StarterWeaponClass), Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_StarterWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_StarterWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Comment", "/************************************************************************/// REPLICATE THE WEAPON Functionality to Client\n" },
		{ "ModuleRelativePath", "SCharacter.h" },
		{ "ToolTip", "********************************************************************// REPLICATE THE WEAPON Functionality to Client" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CurrentWeapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_ADSInterpSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_ADSInterpSpeed = { "ADSInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, ADSInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_ADSInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_ADSInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bWantsToADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS = { "bWantsToADS", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier = { "SprintingSpeedModifier", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, SprintingSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_ADS_FOV_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_ADS_FOV = { "ADS_FOV", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, ADS_FOV), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_ADS_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_ADS_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint_MetaData[] = {
		{ "Comment", "/* Character wants to run, checked during Tick to see if allowed */" },
		{ "ModuleRelativePath", "SCharacter.h" },
		{ "ToolTip", "Character wants to run, checked during Tick to see if allowed" },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bWantsToSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint = { "bWantsToSprint", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/* BlueprintReadOnly: Can't assign new object to this camera component, \n\x09instead we create instance once in constructor*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCharacter.h" },
		{ "ToolTip", "BlueprintReadOnly: Can't assign new object to this camera component,\n      instead we create instance once in constructor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, HealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_AmmoPool_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_AmmoPool = { "AmmoPool", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, AmmoPool), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_AmmoPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_AmmoPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_LoadedAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_LoadedAmmo = { "LoadedAmmo", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, LoadedAmmo), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_LoadedAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_LoadedAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_StarterWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_ADSInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintingSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_ADS_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bWantsToSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_AmmoPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_LoadedAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
		&ASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCharacter, 2645554392);
	template<> COOPSHOOTER_API UClass* StaticClass<ASCharacter>()
	{
		return ASCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/CoopShooter"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);

	void ASCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LoadedAmmo(TEXT("LoadedAmmo"));
		static const FName Name_AmmoPool(TEXT("AmmoPool"));
		static const FName Name_bWantsToSprint(TEXT("bWantsToSprint"));
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));
		static const FName Name_bDied(TEXT("bDied"));

		const bool bIsValid = true
			&& Name_LoadedAmmo == ClassReps[(int32)ENetFields_Private::LoadedAmmo].Property->GetFName()
			&& Name_AmmoPool == ClassReps[(int32)ENetFields_Private::AmmoPool].Property->GetFName()
			&& Name_bWantsToSprint == ClassReps[(int32)ENetFields_Private::bWantsToSprint].Property->GetFName()
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName()
			&& Name_bDied == ClassReps[(int32)ENetFields_Private::bDied].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
