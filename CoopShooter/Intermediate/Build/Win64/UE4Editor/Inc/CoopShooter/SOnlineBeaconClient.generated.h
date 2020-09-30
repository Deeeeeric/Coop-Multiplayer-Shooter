// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCoopShooterLobbyInfo;
#ifdef COOPSHOOTER_SOnlineBeaconClient_generated_h
#error "SOnlineBeaconClient.generated.h already included, missing '#pragma once' in SOnlineBeaconClient.h"
#endif
#define COOPSHOOTER_SOnlineBeaconClient_generated_h

#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_16_DELEGATE \
struct _Script_CoopShooter_eventLobbyUpdated_Parms \
{ \
	FCoopShooterLobbyInfo FOnLobbyUpdated; \
}; \
static inline void FLobbyUpdated_DelegateWrapper(const FMulticastScriptDelegate& LobbyUpdated, FCoopShooterLobbyInfo FOnLobbyUpdated) \
{ \
	_Script_CoopShooter_eventLobbyUpdated_Parms Parms; \
	Parms.FOnLobbyUpdated=FOnLobbyUpdated; \
	LobbyUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_14_DELEGATE \
static inline void FDisconnected_DelegateWrapper(const FMulticastScriptDelegate& Disconnected) \
{ \
	Disconnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_13_DELEGATE \
struct _Script_CoopShooter_eventConnectSuccess_Parms \
{ \
	bool FOnConnected; \
}; \
static inline void FConnectSuccess_DelegateWrapper(const FMulticastScriptDelegate& ConnectSuccess, bool FOnConnected) \
{ \
	_Script_CoopShooter_eventConnectSuccess_Parms Parms; \
	Parms.FOnConnected=FOnConnected ? true : false; \
	ConnectSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_RPC_WRAPPERS \
	virtual void Client_OnLobbyUpdated_Implementation(FCoopShooterLobbyInfo LobbyInfo); \
	virtual void Client_OnDisconnected_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_OnLobbyUpdated); \
	DECLARE_FUNCTION(execClient_OnDisconnected); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execConnectToServerHost);


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClient_OnLobbyUpdated); \
	DECLARE_FUNCTION(execClient_OnDisconnected); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execConnectToServerHost);


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_EVENT_PARMS \
	struct SOnlineBeaconClient_eventClient_OnLobbyUpdated_Parms \
	{ \
		FCoopShooterLobbyInfo LobbyInfo; \
	};


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_CALLBACK_WRAPPERS
#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_ASOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASOnlineBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASOnlineBeaconClient)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_ASOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASOnlineBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASOnlineBeaconClient)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_STANDARD_CONSTRUCTORS \
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


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOnlineBeaconClient(ASOnlineBeaconClient&&); \
	NO_API ASOnlineBeaconClient(const ASOnlineBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOnlineBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOnlineBeaconClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASOnlineBeaconClient)


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FOnConnected() { return STRUCT_OFFSET(ASOnlineBeaconClient, FOnConnected); } \
	FORCEINLINE static uint32 __PPO__FOnDisconnected() { return STRUCT_OFFSET(ASOnlineBeaconClient, FOnDisconnected); } \
	FORCEINLINE static uint32 __PPO__FOnLobbyUpdated() { return STRUCT_OFFSET(ASOnlineBeaconClient, FOnLobbyUpdated); }


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_18_PROLOG \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_EVENT_PARMS


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_CALLBACK_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASOnlineBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SOnlineBeaconClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
