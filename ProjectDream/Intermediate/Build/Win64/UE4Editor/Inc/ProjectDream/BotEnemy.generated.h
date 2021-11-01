// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef PROJECTDREAM_BotEnemy_generated_h
#error "BotEnemy.generated.h already included, missing '#pragma once' in BotEnemy.h"
#endif
#define PROJECTDREAM_BotEnemy_generated_h

#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_SPARSE_DATA
#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageSelf); \
	DECLARE_FUNCTION(execMoveBot); \
	DECLARE_FUNCTION(execGetNextPathPoint); \
	DECLARE_FUNCTION(execSelfDestruction); \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageSelf); \
	DECLARE_FUNCTION(execMoveBot); \
	DECLARE_FUNCTION(execGetNextPathPoint); \
	DECLARE_FUNCTION(execSelfDestruction); \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotEnemy(); \
	friend struct Z_Construct_UClass_ABotEnemy_Statics; \
public: \
	DECLARE_CLASS(ABotEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(ABotEnemy)


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABotEnemy(); \
	friend struct Z_Construct_UClass_ABotEnemy_Statics; \
public: \
	DECLARE_CLASS(ABotEnemy, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(ABotEnemy)


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotEnemy(ABotEnemy&&); \
	NO_API ABotEnemy(const ABotEnemy&); \
public:


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotEnemy(ABotEnemy&&); \
	NO_API ABotEnemy(const ABotEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABotEnemy)


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_PRIVATE_PROPERTY_OFFSET
#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_14_PROLOG
#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_RPC_WRAPPERS \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_INCLASS \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_INCLASS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDREAM_API UClass* StaticClass<class ABotEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDream_Source_ProjectDream_AI_Pawns_BotEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
