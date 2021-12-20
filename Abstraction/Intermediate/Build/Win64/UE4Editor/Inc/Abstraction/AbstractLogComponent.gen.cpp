// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/Public/AbstractLogComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractLogComponent() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_UAbstractLogComponent_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_UAbstractLogComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
// End Cross Module References
	void UAbstractLogComponent::StaticRegisterNativesUAbstractLogComponent()
	{
	}
	UClass* Z_Construct_UClass_UAbstractLogComponent_NoRegister()
	{
		return UAbstractLogComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractLogComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractLogComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractLogComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbstractLogComponent.h" },
		{ "ModuleRelativePath", "Public/AbstractLogComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString_MetaData[] = {
		{ "Category", "AbstractLogComponent" },
		{ "ModuleRelativePath", "Public/AbstractLogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString = { "DataString", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractLogComponent, DataString), METADATA_PARAMS(Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractLogComponent_Statics::NewProp_DataString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractLogComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractLogComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbstractLogComponent_Statics::ClassParams = {
		&UAbstractLogComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbstractLogComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractLogComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbstractLogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbstractLogComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbstractLogComponent, 1237960887);
	template<> ABSTRACTION_API UClass* StaticClass<UAbstractLogComponent>()
	{
		return UAbstractLogComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbstractLogComponent(Z_Construct_UClass_UAbstractLogComponent, &UAbstractLogComponent::StaticClass, TEXT("/Script/Abstraction"), TEXT("UAbstractLogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractLogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
