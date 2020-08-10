// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
struct FRotator;
#ifdef COOPSHOOTER_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOPSHOOTER_SCharacter_generated_h

#define CoopShooter_Source_CoopShooter_SCharacter_h_18_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_SCharacter_h_18_RPC_WRAPPERS \
	virtual bool ServerSetSprinting_Validate(bool ); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execServerSetSprinting); \
	DECLARE_FUNCTION(execGetAimOffsets);


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetSprinting_Validate(bool ); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execServerSetSprinting); \
	DECLARE_FUNCTION(execGetAimOffsets);


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_EVENT_PARMS \
	struct SCharacter_eventServerSetSprinting_Parms \
	{ \
		bool NewSprinting; \
	};


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_CALLBACK_WRAPPERS
#define CoopShooter_Source_CoopShooter_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LoadedAmmo=NETFIELD_REP_START, \
		AmmoPool, \
		bWantsToSprint, \
		CurrentWeapon, \
		bDied, \
		NETFIELD_REP_END=bDied	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LoadedAmmo=NETFIELD_REP_START, \
		AmmoPool, \
		bWantsToSprint, \
		CurrentWeapon, \
		bDied, \
		NETFIELD_REP_END=bDied	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ASCharacter, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ASCharacter, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(ASCharacter, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(ASCharacter, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__bWantsToSprint() { return STRUCT_OFFSET(ASCharacter, bWantsToSprint); } \
	FORCEINLINE static uint32 __PPO__ADS_FOV() { return STRUCT_OFFSET(ASCharacter, ADS_FOV); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ASCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(ASCharacter, bDied); }


#define CoopShooter_Source_CoopShooter_SCharacter_h_15_PROLOG \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_EVENT_PARMS


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_INCLASS \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_SCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
