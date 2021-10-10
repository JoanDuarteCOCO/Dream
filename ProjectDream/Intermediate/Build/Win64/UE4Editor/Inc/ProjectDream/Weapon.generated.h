// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTDREAM_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define PROJECTDREAM_Weapon_generated_h

#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_SPARSE_DATA
#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWeaponFire);


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWeaponFire);


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeapon, WeaponMesh); }


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_12_PROLOG
#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_RPC_WRAPPERS \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_INCLASS \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_INCLASS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDREAM_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDream_Source_ProjectDream_Player_Actors_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS