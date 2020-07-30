// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPSHOOTER_SPowerUpActor_generated_h
#error "SPowerUpActor.generated.h already included, missing '#pragma once' in SPowerUpActor.h"
#endif
#define COOPSHOOTER_SPowerUpActor_generated_h

#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_EVENT_PARMS \
	struct SPowerUpActor_eventOnPowerupStateChange_Parms \
	{ \
		bool bNewIsActive; \
	};


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_CALLBACK_WRAPPERS
#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerUpActor(); \
	friend struct Z_Construct_UClass_ASPowerUpActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASPowerUpActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPowerupActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPowerupActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerUpActor(); \
	friend struct Z_Construct_UClass_ASPowerUpActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASPowerUpActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPowerupActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPowerupActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerUpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerUpActor(ASPowerUpActor&&); \
	NO_API ASPowerUpActor(const ASPowerUpActor&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerUpActor(ASPowerUpActor&&); \
	NO_API ASPowerUpActor(const ASPowerUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerUpActor)


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(ASPowerUpActor, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNumOfTicks() { return STRUCT_OFFSET(ASPowerUpActor, TotalNumOfTicks); } \
	FORCEINLINE static uint32 __PPO__bIsPowerupActive() { return STRUCT_OFFSET(ASPowerUpActor, bIsPowerupActive); }


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_9_PROLOG \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_EVENT_PARMS


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASPowerUpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SPowerUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
