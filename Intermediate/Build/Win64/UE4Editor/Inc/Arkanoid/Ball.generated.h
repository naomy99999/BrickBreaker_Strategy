// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UStaticMeshComponent;
#ifdef ARKANOID_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define ARKANOID_Ball_generated_h

#define Strategy_Source_Arkanoid_Ball_h_14_SPARSE_DATA
#define Strategy_Source_Arkanoid_Ball_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBallCode); \
	DECLARE_FUNCTION(execGetBallLocation); \
	DECLARE_FUNCTION(execGetBall);


#define Strategy_Source_Arkanoid_Ball_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBallCode); \
	DECLARE_FUNCTION(execGetBallLocation); \
	DECLARE_FUNCTION(execGetBall);


#define Strategy_Source_Arkanoid_Ball_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Strategy_Source_Arkanoid_Ball_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Strategy_Source_Arkanoid_Ball_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Strategy_Source_Arkanoid_Ball_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Strategy_Source_Arkanoid_Ball_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__CapsuleCollision() { return STRUCT_OFFSET(ABall, CapsuleCollision); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall, ProjectileMovement); }


#define Strategy_Source_Arkanoid_Ball_h_11_PROLOG
#define Strategy_Source_Arkanoid_Ball_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_Ball_h_14_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_Ball_h_14_SPARSE_DATA \
	Strategy_Source_Arkanoid_Ball_h_14_RPC_WRAPPERS \
	Strategy_Source_Arkanoid_Ball_h_14_INCLASS \
	Strategy_Source_Arkanoid_Ball_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_Ball_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_Ball_h_14_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_Ball_h_14_SPARSE_DATA \
	Strategy_Source_Arkanoid_Ball_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_Ball_h_14_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_Ball_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Arkanoid_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
