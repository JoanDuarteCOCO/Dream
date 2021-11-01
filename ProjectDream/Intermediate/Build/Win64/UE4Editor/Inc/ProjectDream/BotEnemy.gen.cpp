// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/AI/Pawns/BotEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotEnemy() {}
// Cross Module References
	PROJECTDREAM_API UClass* Z_Construct_UClass_ABotEnemy_NoRegister();
	PROJECTDREAM_API UClass* Z_Construct_UClass_ABotEnemy();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ProjectDream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROJECTDREAM_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABotEnemy::execDamageSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageSelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABotEnemy::execMoveBot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveBot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABotEnemy::execGetNextPathPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNextPathPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABotEnemy::execSelfDestruction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelfDestruction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABotEnemy::execHandleTakeDamage)
	{
		P_GET_OBJECT(UHealthComponent,Z_Param_healthComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeDamage(Z_Param_healthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void ABotEnemy::StaticRegisterNativesABotEnemy()
	{
		UClass* Class = ABotEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageSelf", &ABotEnemy::execDamageSelf },
			{ "GetNextPathPoint", &ABotEnemy::execGetNextPathPoint },
			{ "HandleTakeDamage", &ABotEnemy::execHandleTakeDamage },
			{ "MoveBot", &ABotEnemy::execMoveBot },
			{ "SelfDestruction", &ABotEnemy::execSelfDestruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABotEnemy_DamageSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_DamageSelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotEnemy_DamageSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotEnemy, nullptr, "DamageSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_DamageSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_DamageSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotEnemy_DamageSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotEnemy_DamageSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics
	{
		struct BotEnemy_eventGetNextPathPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventGetNextPathPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotEnemy, nullptr, "GetNextPathPoint", nullptr, nullptr, sizeof(BotEnemy_eventGetNextPathPoint_Parms), Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotEnemy_GetNextPathPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotEnemy_GetNextPathPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics
	{
		struct BotEnemy_eventHandleTakeDamage_Parms
		{
			UHealthComponent* healthComponent;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_healthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_healthComponent = { "healthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventHandleTakeDamage_Parms, healthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_healthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_healthComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventHandleTakeDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventHandleTakeDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotEnemy_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_healthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotEnemy, nullptr, "HandleTakeDamage", nullptr, nullptr, sizeof(BotEnemy_eventHandleTakeDamage_Parms), Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotEnemy_HandleTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotEnemy_HandleTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABotEnemy_MoveBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_MoveBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotEnemy_MoveBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotEnemy, nullptr, "MoveBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_MoveBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_MoveBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotEnemy_MoveBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotEnemy_MoveBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABotEnemy_SelfDestruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotEnemy_SelfDestruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotEnemy_SelfDestruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotEnemy, nullptr, "SelfDestruction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotEnemy_SelfDestruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotEnemy_SelfDestruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotEnemy_SelfDestruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotEnemy_SelfDestruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABotEnemy_NoRegister()
	{
		return ABotEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABotEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPathPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextPathPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExploded_MetaData[];
#endif
		static void NewProp_bExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotHealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotHealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBotHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentBotHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartedSelfDestruction_MetaData[];
#endif
		static void NewProp_bStartedSelfDestruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartedSelfDestruction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotEnemy_DamageSelf, "DamageSelf" }, // 255098765
		{ &Z_Construct_UFunction_ABotEnemy_GetNextPathPoint, "GetNextPathPoint" }, // 3528305622
		{ &Z_Construct_UFunction_ABotEnemy_HandleTakeDamage, "HandleTakeDamage" }, // 3281928943
		{ &Z_Construct_UFunction_ABotEnemy_MoveBot, "MoveBot" }, // 1294258768
		{ &Z_Construct_UFunction_ABotEnemy_SelfDestruction, "SelfDestruction" }, // 1899497677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/Pawns/BotEnemy.h" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotMesh_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotMesh = { "BotMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, BotMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_NextPathPoint_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_NextPathPoint = { "NextPathPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, NextPathPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_NextPathPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_NextPathPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, ExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, ExplosionDamage), METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded_SetBit(void* Obj)
	{
		((ABotEnemy*)Obj)->bExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded = { "bExploded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABotEnemy), &Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_RequiredDistanceToTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_RequiredDistanceToTarget = { "RequiredDistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, RequiredDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_RequiredDistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_MovementForce = { "MovementForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, MovementForce), METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_MovementForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((ABotEnemy*)Obj)->bUseVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange = { "bUseVelocityChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABotEnemy), &Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionFX_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionFX = { "ExplosionFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, ExplosionFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotHealthComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotHealthComponent = { "BotHealthComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, BotHealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotHealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotHealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_CurrentBotHealth_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_CurrentBotHealth = { "CurrentBotHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotEnemy, CurrentBotHealth), METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_CurrentBotHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_CurrentBotHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Pawns/BotEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction_SetBit(void* Obj)
	{
		((ABotEnemy*)Obj)->bStartedSelfDestruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction = { "bStartedSelfDestruction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABotEnemy), &Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_NextPathPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_bExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_RequiredDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_MovementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_bUseVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_ExplosionFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_BotHealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_CurrentBotHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotEnemy_Statics::NewProp_bStartedSelfDestruction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotEnemy_Statics::ClassParams = {
		&ABotEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABotEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotEnemy, 4001527259);
	template<> PROJECTDREAM_API UClass* StaticClass<ABotEnemy>()
	{
		return ABotEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotEnemy(Z_Construct_UClass_ABotEnemy, &ABotEnemy::StaticClass, TEXT("/Script/ProjectDream"), TEXT("ABotEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
