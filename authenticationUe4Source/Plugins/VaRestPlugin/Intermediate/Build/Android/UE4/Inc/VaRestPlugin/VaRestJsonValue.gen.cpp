// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestPlugin/Classes/VaRestJsonValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestJsonValue() {}
// Cross Module References
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_EVaJson();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull();
// End Cross Module References
	static UEnum* EVaJson_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestPlugin_EVaJson, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("EVaJson"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaJson(EVaJson_StaticEnum, TEXT("/Script/VaRestPlugin"), TEXT("EVaJson"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestPlugin_EVaJson_CRC() { return 1339785312U; }
	UEnum* Z_Construct_UEnum_VaRestPlugin_EVaJson()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaJson"), 0, Get_Z_Construct_UEnum_VaRestPlugin_EVaJson_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaJson::None", (int64)EVaJson::None },
				{ "EVaJson::Null", (int64)EVaJson::Null },
				{ "EVaJson::String", (int64)EVaJson::String },
				{ "EVaJson::Number", (int64)EVaJson::Number },
				{ "EVaJson::Boolean", (int64)EVaJson::Boolean },
				{ "EVaJson::Array", (int64)EVaJson::Array },
				{ "EVaJson::Object", (int64)EVaJson::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Represents all the types a Json Value can be." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVaJson",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EVaJson::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UVaRestJsonValue::StaticRegisterNativesUVaRestJsonValue()
	{
		UClass* Class = UVaRestJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", &UVaRestJsonValue::execAsArray },
			{ "AsBool", &UVaRestJsonValue::execAsBool },
			{ "AsNumber", &UVaRestJsonValue::execAsNumber },
			{ "AsObject", &UVaRestJsonValue::execAsObject },
			{ "AsString", &UVaRestJsonValue::execAsString },
			{ "ConstructJsonValueArray", &UVaRestJsonValue::execConstructJsonValueArray },
			{ "ConstructJsonValueBool", &UVaRestJsonValue::execConstructJsonValueBool },
			{ "ConstructJsonValueNumber", &UVaRestJsonValue::execConstructJsonValueNumber },
			{ "ConstructJsonValueObject", &UVaRestJsonValue::execConstructJsonValueObject },
			{ "ConstructJsonValueString", &UVaRestJsonValue::execConstructJsonValueString },
			{ "GetType", &UVaRestJsonValue::execGetType },
			{ "GetTypeString", &UVaRestJsonValue::execGetTypeString },
			{ "IsNull", &UVaRestJsonValue::execIsNull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics
	{
		struct VaRestJsonValue_eventAsArray_Parms
		{
			TArray<UVaRestJsonValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsArray_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics
	{
		struct VaRestJsonValue_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsBool_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics
	{
		struct VaRestJsonValue_eventAsNumber_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsNumber_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics
	{
		struct VaRestJsonValue_eventAsObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestJsonValue_eventAsObject_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics
	{
		struct VaRestJsonValue_eventAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a number, throwing an error if this is not an Json String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsString_Parms), Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics
	{
		struct VaRestJsonValue_eventConstructJsonValueArray_Parms
		{
			UObject* WorldContextObject;
			TArray<UVaRestJsonValue*> InArray;
			UVaRestJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray = { UE4CodeGen_Private::EPropertyClass::Array, "InArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueArray_Parms, InArray), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Create new Json Array value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(VaRestJsonValue_eventConstructJsonValueArray_Parms), Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics
	{
		struct VaRestJsonValue_eventConstructJsonValueBool_Parms
		{
			UObject* WorldContextObject;
			bool InValue;
			UVaRestJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Bool, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestJsonValue_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Create new Json Bool value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueBool_Parms), Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics
	{
		struct VaRestJsonValue_eventConstructJsonValueNumber_Parms
		{
			UObject* WorldContextObject;
			float Number;
			UVaRestJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number = { UE4CodeGen_Private::EPropertyClass::Float, "Number", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueNumber_Parms), Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics
	{
		struct VaRestJsonValue_eventConstructJsonValueObject_Parms
		{
			UObject* WorldContextObject;
			UVaRestJsonObject* JsonObject;
			UVaRestJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject = { UE4CodeGen_Private::EPropertyClass::Object, "JsonObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Create new Json Object value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueObject_Parms), Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics
	{
		struct VaRestJsonValue_eventConstructJsonValueString_Parms
		{
			UObject* WorldContextObject;
			FString StringValue;
			UVaRestJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json String Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Create new Json String value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueString_Parms), Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics
	{
		struct VaRestJsonValue_eventGetType_Parms
		{
			TEnumAsByte<EVaJson::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_VaRestPlugin_EVaJson, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (Enum)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "GetType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventGetType_Parms), Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics
	{
		struct VaRestJsonValue_eventGetTypeString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (String)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "GetTypeString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventGetTypeString_Parms), Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics
	{
		struct VaRestJsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Returns true if this value is a 'null'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "IsNull", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventIsNull_Parms), Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister()
	{
		return UVaRestJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsArray, "AsArray" }, // 2433273721
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsBool, "AsBool" }, // 3756137546
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsNumber, "AsNumber" }, // 2096868215
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsObject, "AsObject" }, // 3693111696
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsString, "AsString" }, // 1746626889
		{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 3887347413
		{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 1684787580
		{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 1788795550
		{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 1088501321
		{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString, "ConstructJsonValueString" }, // 758340476
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetType, "GetType" }, // 3571021337
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetTypeString, "GetTypeString" }, // 2503979977
		{ &Z_Construct_UFunction_UVaRestJsonValue_IsNull, "IsNull" }, // 120362515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaRestJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestJsonValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams = {
		&UVaRestJsonValue::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaRestJsonValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestJsonValue, 2167745282);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestJsonValue(Z_Construct_UClass_UVaRestJsonValue, &UVaRestJsonValue::StaticClass, TEXT("/Script/VaRestPlugin"), TEXT("UVaRestJsonValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestJsonValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
