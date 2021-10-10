// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/Player/Actors/DummyTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyTarget() {}
// Cross Module References
	PROJECTDREAM_API UClass* Z_Construct_UClass_ADummyTarget_NoRegister();
	PROJECTDREAM_API UClass* Z_Construct_UClass_ADummyTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectDream();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ADummyTarget::StaticRegisterNativesADummyTarget()
	{
	}
	UClass* Z_Construct_UClass_ADummyTarget_NoRegister()
	{
		return ADummyTarget::StaticClass();
	}
	struct Z_Construct_UClass_ADummyTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADummyTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Actors/DummyTarget.h" },
		{ "ModuleRelativePath", "Player/Actors/DummyTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyTarget_Statics::NewProp_DummyMesh_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Actors/DummyTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADummyTarget_Statics::NewProp_DummyMesh = { "DummyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyTarget, DummyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADummyTarget_Statics::NewProp_DummyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADummyTarget_Statics::NewProp_DummyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADummyTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyTarget_Statics::NewProp_DummyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADummyTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADummyTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADummyTarget_Statics::ClassParams = {
		&ADummyTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADummyTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADummyTarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADummyTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADummyTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADummyTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADummyTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADummyTarget, 3034680161);
	template<> PROJECTDREAM_API UClass* StaticClass<ADummyTarget>()
	{
		return ADummyTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADummyTarget(Z_Construct_UClass_ADummyTarget, &ADummyTarget::StaticClass, TEXT("/Script/ProjectDream"), TEXT("ADummyTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADummyTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
