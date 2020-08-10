// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
#ifdef COOPSHOOTER_SGameModeBase_generated_h
#error "SGameModeBase.generated.h already included, missing '#pragma once' in SGameModeBase.h"
#endif
#define COOPSHOOTER_SGameModeBase_generated_h

#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_10_DELEGATE \
struct _Script_CoopShooter_eventOnActorKilled_Parms \
{ \
	AActor* KilledActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* KilledActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_CoopShooter_eventOnActorKilled_Parms Parms; \
	Parms.KilledActor=KilledActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_RPC_WRAPPERS
#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameModeBase(); \
	friend struct Z_Construct_UClass_ASGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameModeBase)


#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASGameModeBase(); \
	friend struct Z_Construct_UClass_ASGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameModeBase)


#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameModeBase(ASGameModeBase&&); \
	NO_API ASGameModeBase(const ASGameModeBase&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameModeBase(ASGameModeBase&&); \
	NO_API ASGameModeBase(const ASGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameModeBase)


#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET
#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_15_PROLOG
#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
