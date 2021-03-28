// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef COOPSHOOTER_SCoopShooterGameInstance_generated_h
#error "SCoopShooterGameInstance.generated.h already included, missing '#pragma once' in SCoopShooterGameInstance.h"
#endif
#define COOPSHOOTER_SCoopShooterGameInstance_generated_h

#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerData_Statics; \
	COOPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> COOPSHOOTER_API UScriptStruct* StaticStruct<struct FServerData>();

#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_34_DELEGATE \
static inline void FServersReceived_DelegateWrapper(const FMulticastScriptDelegate& ServersReceived) \
{ \
	ServersReceived.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_14_DELEGATE \
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


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetServerList);


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetServerList);


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSCoopShooterGameInstance(); \
	friend struct Z_Construct_UClass_USCoopShooterGameInstance_Statics; \
public: \
	DECLARE_CLASS(USCoopShooterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(USCoopShooterGameInstance)


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUSCoopShooterGameInstance(); \
	friend struct Z_Construct_UClass_USCoopShooterGameInstance_Statics; \
public: \
	DECLARE_CLASS(USCoopShooterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(USCoopShooterGameInstance)


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USCoopShooterGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCoopShooterGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCoopShooterGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCoopShooterGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCoopShooterGameInstance(USCoopShooterGameInstance&&); \
	NO_API USCoopShooterGameInstance(const USCoopShooterGameInstance&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCoopShooterGameInstance(USCoopShooterGameInstance&&); \
	NO_API USCoopShooterGameInstance(const USCoopShooterGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCoopShooterGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCoopShooterGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USCoopShooterGameInstance)


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FOnServersReceived() { return STRUCT_OFFSET(USCoopShooterGameInstance, FOnServersReceived); }


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_38_PROLOG
#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class USCoopShooterGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SCoopShooterGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
