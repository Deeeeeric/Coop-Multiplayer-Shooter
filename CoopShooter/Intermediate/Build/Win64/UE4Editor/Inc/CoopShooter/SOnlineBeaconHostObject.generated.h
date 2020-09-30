// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCoopShooterLobbyInfo;
#ifdef COOPSHOOTER_SOnlineBeaconHostObject_generated_h
#error "SOnlineBeaconHostObject.generated.h already included, missing '#pragma once' in SOnlineBeaconHostObject.h"
#endif
#define COOPSHOOTER_SOnlineBeaconHostObject_generated_h

#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoopShooterLobbyInfo_Statics; \
	COOPSHOOTER_API static class UScriptStruct* StaticStruct();


template<> COOPSHOOTER_API UScriptStruct* StaticStruct<struct FCoopShooterLobbyInfo>();

#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShutdownServer); \
	DECLARE_FUNCTION(execDisconnectAllClients); \
	DECLARE_FUNCTION(execUpdateLobbyInfo);


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShutdownServer); \
	DECLARE_FUNCTION(execDisconnectAllClients); \
	DECLARE_FUNCTION(execUpdateLobbyInfo);


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASOnlineBeaconHostObject(); \
	friend struct Z_Construct_UClass_ASOnlineBeaconHostObject_Statics; \
public: \
	DECLARE_CLASS(ASOnlineBeaconHostObject, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASOnlineBeaconHostObject)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASOnlineBeaconHostObject(); \
	friend struct Z_Construct_UClass_ASOnlineBeaconHostObject_Statics; \
public: \
	DECLARE_CLASS(ASOnlineBeaconHostObject, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASOnlineBeaconHostObject)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASOnlineBeaconHostObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASOnlineBeaconHostObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOnlineBeaconHostObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOnlineBeaconHostObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOnlineBeaconHostObject(ASOnlineBeaconHostObject&&); \
	NO_API ASOnlineBeaconHostObject(const ASOnlineBeaconHostObject&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOnlineBeaconHostObject(ASOnlineBeaconHostObject&&); \
	NO_API ASOnlineBeaconHostObject(const ASOnlineBeaconHostObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOnlineBeaconHostObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOnlineBeaconHostObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASOnlineBeaconHostObject)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_PRIVATE_PROPERTY_OFFSET
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_21_PROLOG
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASOnlineBeaconHostObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SOnlineBeaconHostObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
