// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef COOPSHOOTER_SAmmoCrate_generated_h
#error "SAmmoCrate.generated.h already included, missing '#pragma once' in SAmmoCrate.h"
#endif
#define COOPSHOOTER_SAmmoCrate_generated_h

#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_SPARSE_DATA
#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPickup);


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPickup);


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAmmoCrate(); \
	friend struct Z_Construct_UClass_ASAmmoCrate_Statics; \
public: \
	DECLARE_CLASS(ASAmmoCrate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASAmmoCrate)


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASAmmoCrate(); \
	friend struct Z_Construct_UClass_ASAmmoCrate_Statics; \
public: \
	DECLARE_CLASS(ASAmmoCrate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopShooter"), NO_API) \
	DECLARE_SERIALIZER(ASAmmoCrate)


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAmmoCrate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAmmoCrate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAmmoCrate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAmmoCrate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAmmoCrate(ASAmmoCrate&&); \
	NO_API ASAmmoCrate(const ASAmmoCrate&); \
public:


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAmmoCrate(ASAmmoCrate&&); \
	NO_API ASAmmoCrate(const ASAmmoCrate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAmmoCrate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAmmoCrate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASAmmoCrate)


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_PRIVATE_PROPERTY_OFFSET
#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_9_PROLOG
#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_RPC_WRAPPERS \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_INCLASS \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_SPARSE_DATA \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_INCLASS_NO_PURE_DECLS \
	CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPSHOOTER_API UClass* StaticClass<class ASAmmoCrate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooter_Source_CoopShooter_Public_SAmmoCrate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
