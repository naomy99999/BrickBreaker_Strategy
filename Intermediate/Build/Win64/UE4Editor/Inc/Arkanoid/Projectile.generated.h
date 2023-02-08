// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define ARKANOID_Projectile_generated_h

#define Strategy_Source_Arkanoid_Projectile_h_14_SPARSE_DATA
#define Strategy_Source_Arkanoid_Projectile_h_14_RPC_WRAPPERS
#define Strategy_Source_Arkanoid_Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Arkanoid_Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define Strategy_Source_Arkanoid_Projectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define Strategy_Source_Arkanoid_Projectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define Strategy_Source_Arkanoid_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define Strategy_Source_Arkanoid_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Projectile() { return STRUCT_OFFSET(AProjectile, SM_Projectile); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__CapsuleCollision() { return STRUCT_OFFSET(AProjectile, CapsuleCollision); }


#define Strategy_Source_Arkanoid_Projectile_h_11_PROLOG
#define Strategy_Source_Arkanoid_Projectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_Projectile_h_14_SPARSE_DATA \
	Strategy_Source_Arkanoid_Projectile_h_14_RPC_WRAPPERS \
	Strategy_Source_Arkanoid_Projectile_h_14_INCLASS \
	Strategy_Source_Arkanoid_Projectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_Projectile_h_14_SPARSE_DATA \
	Strategy_Source_Arkanoid_Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_Projectile_h_14_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Arkanoid_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
