// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef COOPSHOOTER_SGameInstance_generated_h
#error "SGameInstance.generated.h already included, missing '#pragma once' in SGameInstance.h"
#endif
#define COOPSHOOTER_SGameInstance_generated_h

#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_13_DELEGATE \
struct _Script_CoopShooter_eventPlayerArrayChanged_Parms \
{ \
	APlayerState* PlayerState; \
}; \
static inline void FPlayerArrayChanged_DelegateWrapper(const FMulticastScriptDelegate& PlayerArrayChanged, APlayerState* PlayerState) \
{ \
	_Script_CoopShooter_eventPlayerArrayChanged_Parms Parms; \
	Parms.PlayerState=PlayerState; \
	PlayerArrayChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_RPC_WRAPPERS
#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGameInstance(); \
	friend struct Z_Construct_UClass_USGameInstance_Statics; \
public: \
	DECLARE_CLASS(USGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(USGameInstance)


#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSGameInstance(); \
	friend struct Z_Construct_UClass_USGameInstance_Statics; \
public: \
	DECLARE_CLASS(USGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(USGameInstance)


#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameInstance(USGameInstance&&); \
	NO_API USGameInstance(const USGameInstance&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameInstance(USGameInstance&&); \
	NO_API USGameInstance(const USGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameInstance)


#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_PRIVATE_PROPERTY_OFFSET
#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_17_PROLOG
#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class USGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
