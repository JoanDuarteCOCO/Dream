// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/Player/Characters/TestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}
// Cross Module References
	PROJECTDREAM_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
	PROJECTDREAM_API UClass* Z_Construct_UClass_ATestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectDream();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTDREAM_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATestCharacter::execSpawnWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execResetDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execStopDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash();
		P_NATIVE_END;
	}
	void ATestCharacter::StaticRegisterNativesATestCharacter()
	{
		UClass* Class = ATestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dash", &ATestCharacter::execDash },
			{ "Fire", &ATestCharacter::execFire },
			{ "MoveForward", &ATestCharacter::execMoveForward },
			{ "MoveRight", &ATestCharacter::execMoveRight },
			{ "ResetDash", &ATestCharacter::execResetDash },
			{ "SpawnWeapon", &ATestCharacter::execSpawnWeapon },
			{ "StopDash", &ATestCharacter::execStopDash },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestCharacter_Dash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_Dash_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Funciones para aplicar la mecania de Dash\n" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
		{ "ToolTip", "Funciones para aplicar la mecania de Dash" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "Dash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_Dash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_Dash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_MoveForward_Statics
	{
		struct TestCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "//Funciones de Movimiento Enfrente y Lateral\n" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
		{ "ToolTip", "Funciones de Movimiento Enfrente y Lateral" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(TestCharacter_eventMoveForward_Parms), Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_MoveRight_Statics
	{
		struct TestCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(TestCharacter_eventMoveRight_Parms), Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_ResetDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_ResetDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_ResetDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "ResetDash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_ResetDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_ResetDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_ResetDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_ResetDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_SpawnWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_SpawnWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_SpawnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "SpawnWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_SpawnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_SpawnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_SpawnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_SpawnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_StopDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_StopDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_StopDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "StopDash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_StopDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_StopDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_StopDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestCharacter_StopDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
	{
		return ATestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoomCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bCanDash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestCharacter_Dash, "Dash" }, // 3062250216
		{ &Z_Construct_UFunction_ATestCharacter_Fire, "Fire" }, // 3555240625
		{ &Z_Construct_UFunction_ATestCharacter_MoveForward, "MoveForward" }, // 1457832974
		{ &Z_Construct_UFunction_ATestCharacter_MoveRight, "MoveRight" }, // 4190806255
		{ &Z_Construct_UFunction_ATestCharacter_ResetDash, "ResetDash" }, // 2212868924
		{ &Z_Construct_UFunction_ATestCharacter_SpawnWeapon, "SpawnWeapon" }, // 3125635497
		{ &Z_Construct_UFunction_ATestCharacter_StopDash, "StopDash" }, // 2374906453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Characters/TestCharacter.h" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_WeaponBlueprint_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "//Variable que pemrite instanciar el Blueprint del arma (Weapon)\n" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
		{ "ToolTip", "Variable que pemrite instanciar el Blueprint del arma (Weapon)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_WeaponBlueprint = { "WeaponBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, WeaponBlueprint), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_WeaponBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_WeaponBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_BoomCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "Comment", "//Propiedades que le pertenecen al jugador\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
		{ "ToolTip", "Propiedades que le pertenecen al jugador" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_BoomCamera = { "BoomCamera", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, BoomCamera), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_BoomCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_BoomCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((ATestCharacter*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATestCharacter), &Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashDistance = { "DashDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, DashDistance), METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, DashCooldown), METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashStop = { "DashStop", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, DashStop), METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_bCanDash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/Characters/TestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_bCanDash = { "bCanDash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestCharacter, bCanDash), METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_bCanDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_bCanDash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_WeaponBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_BoomCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_bIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_DashStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_bCanDash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
		&ATestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestCharacter, 1364702670);
	template<> PROJECTDREAM_API UClass* StaticClass<ATestCharacter>()
	{
		return ATestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestCharacter(Z_Construct_UClass_ATestCharacter, &ATestCharacter::StaticClass, TEXT("/Script/ProjectDream"), TEXT("ATestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
