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
struct FVector;
struct FHitResult;
#ifdef COMPONENTEPLATAFORMA_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define COMPONENTEPLATAFORMA_Projectile_generated_h

#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_SPARSE_DATA
#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComponentePlataforma"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComponentePlataforma"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_STANDARD_CONSTRUCTORS \
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


#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_PRIVATE_PROPERTY_OFFSET
#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_12_PROLOG
#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_SPARSE_DATA \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_RPC_WRAPPERS \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_INCLASS \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_SPARSE_DATA \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_INCLASS_NO_PURE_DECLS \
	ComponentePlataforma_Source_ComponentePlataforma_Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPONENTEPLATAFORMA_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ComponentePlataforma_Source_ComponentePlataforma_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS