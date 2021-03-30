// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPSHOOTER_SGameState_generated_h
#error "SGameState.generated.h already included, missing '#pragma once' in SGameState.h"
#endif
#define COOPSHOOTER_SGameState_generated_h

#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_RPC_WRAPPERS
#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameState)


#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameState)


#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameState)


#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScoreToWin() { return STRUCT_OFFSET(ASGameState, ScoreToWin); } \
	FORCEINLINE static uint32 __PPO__IncrementScoreValue() { return STRUCT_OFFSET(ASGameState, IncrementScoreValue); } \
	FORCEINLINE static uint32 __PPO__AlphaTeamScore() { return STRUCT_OFFSET(ASGameState, AlphaTeamScore); } \
	FORCEINLINE static uint32 __PPO__BravoTeamScore() { return STRUCT_OFFSET(ASGameState, BravoTeamScore); }


#define CoopShooter_Source_CoopShooter_Public_SGameState_h_12_PROLOG
#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
