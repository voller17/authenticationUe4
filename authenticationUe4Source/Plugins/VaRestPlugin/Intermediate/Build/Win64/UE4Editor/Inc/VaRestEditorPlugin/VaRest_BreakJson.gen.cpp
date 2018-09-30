// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestEditorPlugin/Classes/VaRest_BreakJson.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRest_BreakJson() {}
// Cross Module References
	VARESTEDITORPLUGIN_API UEnum* Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType();
	UPackage* Z_Construct_UPackage__Script_VaRestEditorPlugin();
	VARESTEDITORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVaRest_NamedType();
	VARESTEDITORPLUGIN_API UClass* Z_Construct_UClass_UVaRest_MakeJson_NoRegister();
	VARESTEDITORPLUGIN_API UClass* Z_Construct_UClass_UVaRest_MakeJson();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	VARESTEDITORPLUGIN_API UClass* Z_Construct_UClass_UVaRest_BreakJson_NoRegister();
	VARESTEDITORPLUGIN_API UClass* Z_Construct_UClass_UVaRest_BreakJson();
// End Cross Module References
	static UEnum* EVaRest_JsonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType, Z_Construct_UPackage__Script_VaRestEditorPlugin(), TEXT("EVaRest_JsonType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaRest_JsonType(EVaRest_JsonType_StaticEnum, TEXT("/Script/VaRestEditorPlugin"), TEXT("EVaRest_JsonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType_CRC() { return 2610524782U; }
	UEnum* Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestEditorPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaRest_JsonType"), 0, Get_Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaRest_JsonType::JSON_Bool", (int64)EVaRest_JsonType::JSON_Bool },
				{ "EVaRest_JsonType::JSON_Number", (int64)EVaRest_JsonType::JSON_Number },
				{ "EVaRest_JsonType::JSON_String", (int64)EVaRest_JsonType::JSON_String },
				{ "EVaRest_JsonType::JSON_Object", (int64)EVaRest_JsonType::JSON_Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JSON_Bool.DisplayName", "Boolean" },
				{ "JSON_Bool.ToolTip", "JSON_Null UMETA(DisplayName = \"Null\")," },
				{ "JSON_Number.DisplayName", "Number" },
				{ "JSON_Object.DisplayName", "Object" },
				{ "JSON_String.DisplayName", "String" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVaRest_JsonType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVaRest_JsonType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVaRest_NamedType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VARESTEDITORPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRest_NamedType, Z_Construct_UPackage__Script_VaRestEditorPlugin(), TEXT("VaRest_NamedType"), sizeof(FVaRest_NamedType), Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVaRest_NamedType(FVaRest_NamedType::StaticStruct, TEXT("/Script/VaRestEditorPlugin"), TEXT("VaRest_NamedType"), false, nullptr, nullptr);
static struct FScriptStruct_VaRestEditorPlugin_StaticRegisterNativesFVaRest_NamedType
{
	FScriptStruct_VaRestEditorPlugin_StaticRegisterNativesFVaRest_NamedType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VaRest_NamedType")),new UScriptStruct::TCppStructOps<FVaRest_NamedType>);
	}
} ScriptStruct_VaRestEditorPlugin_StaticRegisterNativesFVaRest_NamedType;
	struct Z_Construct_UScriptStruct_FVaRest_NamedType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRest_NamedType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_MetaData[] = {
		{ "Category", "NamedType" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FVaRest_NamedType*)Obj)->bIsArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVaRest_NamedType), &Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "NamedType" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVaRest_NamedType, Type), Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NamedType" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVaRest_NamedType, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
		nullptr,
		&NewStructOps,
		"VaRest_NamedType",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVaRest_NamedType),
		alignof(FVaRest_NamedType),
		Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVaRest_NamedType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestEditorPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VaRest_NamedType"), sizeof(FVaRest_NamedType), Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC() { return 3945698948U; }
	void UVaRest_MakeJson::StaticRegisterNativesUVaRest_MakeJson()
	{
	}
	UClass* Z_Construct_UClass_UVaRest_MakeJson_NoRegister()
	{
		return UVaRest_MakeJson::StaticClass();
	}
	struct Z_Construct_UClass_UVaRest_MakeJson_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRest_MakeJson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRest_MakeJson_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaRest_BreakJson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVaRest_MakeJson, Inputs), METADATA_PARAMS(Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVaRest_NamedType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRest_MakeJson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRest_MakeJson>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRest_MakeJson_Statics::ClassParams = {
		&UVaRest_MakeJson::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVaRest_MakeJson_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRest_MakeJson()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRest_MakeJson_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRest_MakeJson, 2697150199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRest_MakeJson(Z_Construct_UClass_UVaRest_MakeJson, &UVaRest_MakeJson::StaticClass, TEXT("/Script/VaRestEditorPlugin"), TEXT("UVaRest_MakeJson"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRest_MakeJson);
	void UVaRest_BreakJson::StaticRegisterNativesUVaRest_BreakJson()
	{
	}
	UClass* Z_Construct_UClass_UVaRest_BreakJson_NoRegister()
	{
		return UVaRest_BreakJson::StaticClass();
	}
	struct Z_Construct_UClass_UVaRest_BreakJson_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRest_BreakJson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRest_BreakJson_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaRest_BreakJson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs = { UE4CodeGen_Private::EPropertyClass::Array, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVaRest_BreakJson, Outputs), METADATA_PARAMS(Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVaRest_NamedType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRest_BreakJson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRest_BreakJson>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRest_BreakJson_Statics::ClassParams = {
		&UVaRest_BreakJson::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVaRest_BreakJson_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRest_BreakJson()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRest_BreakJson_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRest_BreakJson, 2699122506);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRest_BreakJson(Z_Construct_UClass_UVaRest_BreakJson, &UVaRest_BreakJson::StaticClass, TEXT("/Script/VaRestEditorPlugin"), TEXT("UVaRest_BreakJson"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRest_BreakJson);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
