// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPSHOOTER_SOnlineBeaconClient_generated_h
#error "SOnlineBeaconClient.generated.h already included, missing '#pragma once' in SOnlineBeaconClient.h"
#endif
#define COOPSHOOTER_SOnlineBeaconClient_generated_h

#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_12_DELEGATE \
struct _Script_CoopShooter_eventConnectSuccess_Parms \
{ \
	bool FConnected; \
}; \
static inline void FConnectSuccess_DelegateWrapper(const FMulticastScriptDelegate& ConnectSuccess, bool FConnected) \
{ \
	_Script_CoopShooter_eventConnectSuccess_Parms Parms; \
	Parms.FConnected=FConnected ? true : false; \
	ConnectSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_RPC_WRAPPERS \
	virtual void Client_OnDisconnected_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_OnDisconnected); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execConnectToServerHost);


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnDisconnected_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_OnDisconnected); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execConnectToServerHost);


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_EVENT_PARMS
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_CALLBACK_WRAPPERS
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_ASOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASOnlineBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASOnlineBeaconClient)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_ASOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASOnlineBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASOnlineBeaconClient)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASOnlineBeaconClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASOnlineBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOnlineBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOnlineBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOnlineBeaconClient(ASOnlineBeaconClient&&); \
	NO_API ASOnlineBeaconClient(const ASOnlineBeaconClient&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOnlineBeaconClient(ASOnlineBeaconClient&&); \
	NO_API ASOnlineBeaconClient(const ASOnlineBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOnlineBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOnlineBeaconClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASOnlineBeaconClient)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FConnected() { return STRUCT_OFFSET(ASOnlineBeaconClient, FConnected); }


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_14_PROLOG \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_EVENT_PARMS


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASOnlineBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
