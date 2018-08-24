// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Engine/KBECommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBECommon() {}
// Cross Module References
	KBENGINEPLUGINS_API UEnum* Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE();
	UPackage* Z_Construct_UPackage__Script_KBEnginePlugins();
	KBENGINEPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FKServerErr();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_AKBECommon_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_AKBECommon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EKCLIENT_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE, Z_Construct_UPackage__Script_KBEnginePlugins(), TEXT("EKCLIENT_TYPE"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKCLIENT_TYPE(EKCLIENT_TYPE_StaticEnum, TEXT("/Script/KBEnginePlugins"), TEXT("EKCLIENT_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE_CRC() { return 686343791U; }
	UEnum* Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KBEnginePlugins();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKCLIENT_TYPE"), 0, Get_Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKCLIENT_TYPE::CLIENT_TYPE_UNKNOWN", (int64)EKCLIENT_TYPE::CLIENT_TYPE_UNKNOWN },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_MOBILE", (int64)EKCLIENT_TYPE::CLIENT_TYPE_MOBILE },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_WIN", (int64)EKCLIENT_TYPE::CLIENT_TYPE_WIN },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_LINUX", (int64)EKCLIENT_TYPE::CLIENT_TYPE_LINUX },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_MAC", (int64)EKCLIENT_TYPE::CLIENT_TYPE_MAC },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_BROWSER", (int64)EKCLIENT_TYPE::CLIENT_TYPE_BROWSER },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_BOTS", (int64)EKCLIENT_TYPE::CLIENT_TYPE_BOTS },
				{ "EKCLIENT_TYPE::CLIENT_TYPE_MINI", (int64)EKCLIENT_TYPE::CLIENT_TYPE_MINI },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CLIENT_TYPE_BOTS.DisplayName", "Bots" },
				{ "CLIENT_TYPE_BROWSER.DisplayName", "Browser" },
				{ "CLIENT_TYPE_LINUX.DisplayName", "Linux" },
				{ "CLIENT_TYPE_MAC.DisplayName", "Mac" },
				{ "CLIENT_TYPE_MINI.DisplayName", "Mini" },
				{ "CLIENT_TYPE_MOBILE.DisplayName", "Mobile" },
				{ "CLIENT_TYPE_UNKNOWN.DisplayName", "unknown" },
				{ "CLIENT_TYPE_WIN.DisplayName", "Windows" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
				{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe7\x9a\x84\xe7\xb1\xbb\xe5\x88\xab\nhttp:www.kbengine.org/docs/programming/clientsdkprogramming.html\nhttp:www.kbengine.org/cn/docs/programming/clientsdkprogramming.html" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KBEnginePlugins,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EKCLIENT_TYPE",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EKCLIENT_TYPE",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKServerErr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KBENGINEPLUGINS_API uint32 Get_Z_Construct_UScriptStruct_FKServerErr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKServerErr, Z_Construct_UPackage__Script_KBEnginePlugins(), TEXT("KServerErr"), sizeof(FKServerErr), Get_Z_Construct_UScriptStruct_FKServerErr_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKServerErr(FKServerErr::StaticStruct, TEXT("/Script/KBEnginePlugins"), TEXT("KServerErr"), false, nullptr, nullptr);
static struct FScriptStruct_KBEnginePlugins_StaticRegisterNativesFKServerErr
{
	FScriptStruct_KBEnginePlugins_StaticRegisterNativesFKServerErr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KServerErr")),new UScriptStruct::TCppStructOps<FKServerErr>);
	}
} ScriptStruct_KBEnginePlugins_StaticRegisterNativesFKServerErr;
	UScriptStruct* Z_Construct_UScriptStruct_FKServerErr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKServerErr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_KBEnginePlugins();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KServerErr"), sizeof(FKServerErr), Get_Z_Construct_UScriptStruct_FKServerErr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKServerErr>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
				{ "Category", "ServerErr" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKServerErr, id), METADATA_PARAMS(NewProp_id_MetaData, ARRAY_COUNT(NewProp_id_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_descr_MetaData[] = {
				{ "Category", "ServerErr" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_descr = { UE4CodeGen_Private::EPropertyClass::Str, "descr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKServerErr, descr), METADATA_PARAMS(NewProp_descr_MetaData, ARRAY_COUNT(NewProp_descr_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
				{ "Category", "ServerErr" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FKServerErr, name), METADATA_PARAMS(NewProp_name_MetaData, ARRAY_COUNT(NewProp_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_id,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_descr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KServerErr",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKServerErr),
				alignof(FKServerErr),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKServerErr_CRC() { return 2960517438U; }
	void AKBECommon::StaticRegisterNativesAKBECommon()
	{
	}
	UClass* Z_Construct_UClass_AKBECommon_NoRegister()
	{
		return AKBECommon::StaticClass();
	}
	UClass* Z_Construct_UClass_AKBECommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/KBECommon.h" },
				{ "ModuleRelativePath", "Engine/KBECommon.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AKBECommon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AKBECommon::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKBECommon, 2527948162);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKBECommon(Z_Construct_UClass_AKBECommon, &AKBECommon::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("AKBECommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKBECommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
