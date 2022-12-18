// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGCOMBAT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define RPGCOMBAT_Pickup_generated_h

#define RPGCombat_Source_RPGCombat_Pickup_h_15_SPARSE_DATA
#define RPGCombat_Source_RPGCombat_Pickup_h_15_RPC_WRAPPERS
#define RPGCombat_Source_RPGCombat_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RPGCombat_Source_RPGCombat_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define RPGCombat_Source_RPGCombat_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define RPGCombat_Source_RPGCombat_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define RPGCombat_Source_RPGCombat_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define RPGCombat_Source_RPGCombat_Pickup_h_15_PRIVATE_PROPERTY_OFFSET
#define RPGCombat_Source_RPGCombat_Pickup_h_12_PROLOG
#define RPGCombat_Source_RPGCombat_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGCombat_Source_RPGCombat_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	RPGCombat_Source_RPGCombat_Pickup_h_15_SPARSE_DATA \
	RPGCombat_Source_RPGCombat_Pickup_h_15_RPC_WRAPPERS \
	RPGCombat_Source_RPGCombat_Pickup_h_15_INCLASS \
	RPGCombat_Source_RPGCombat_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPGCombat_Source_RPGCombat_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGCombat_Source_RPGCombat_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	RPGCombat_Source_RPGCombat_Pickup_h_15_SPARSE_DATA \
	RPGCombat_Source_RPGCombat_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RPGCombat_Source_RPGCombat_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	RPGCombat_Source_RPGCombat_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPGCombat_Source_RPGCombat_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
