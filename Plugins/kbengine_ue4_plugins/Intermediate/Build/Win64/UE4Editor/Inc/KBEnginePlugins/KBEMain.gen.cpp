// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Engine/KBEMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKBEMain() {}
// Cross Module References
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEMain_NoRegister();
	KBENGINEPLUGINS_API UClass* Z_Construct_UClass_UKBEMain();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_KBEnginePlugins();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_createAccount();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_destroyKBEngine();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getClientScriptVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getClientVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getComponentName();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getServerScriptVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_getServerVersion();
	KBENGINEPLUGINS_API UFunction* Z_Construct_UFunction_UKBEMain_login();
	KBENGINEPLUGINS_API UEnum* Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE();
// End Cross Module References
	void UKBEMain::StaticRegisterNativesUKBEMain()
	{
		UClass* Class = UKBEMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "createAccount", &UKBEMain::execcreateAccount },
			{ "destroyKBEngine", &UKBEMain::execdestroyKBEngine },
			{ "getClientScriptVersion", &UKBEMain::execgetClientScriptVersion },
			{ "getClientVersion", &UKBEMain::execgetClientVersion },
			{ "getComponentName", &UKBEMain::execgetComponentName },
			{ "getServerScriptVersion", &UKBEMain::execgetServerScriptVersion },
			{ "getServerVersion", &UKBEMain::execgetServerVersion },
			{ "login", &UKBEMain::execlogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKBEMain_createAccount()
	{
		struct KBEMain_eventcreateAccount_Parms
		{
			FString username;
			FString password;
			TArray<uint8> datas;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KBEMain_eventcreateAccount_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KBEMain_eventcreateAccount_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datas_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_datas = { UE4CodeGen_Private::EPropertyClass::Array, "datas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KBEMain_eventcreateAccount_Parms, datas), METADATA_PARAMS(NewProp_datas_MetaData, ARRAY_COUNT(NewProp_datas_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_datas_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "datas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_password = { UE4CodeGen_Private::EPropertyClass::Str, "password", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KBEMain_eventcreateAccount_Parms, password), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KBEMain_eventcreateAccount_Parms, username), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_datas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_datas_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_password,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_username,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
				{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe8\xb4\xa6\xe5\x8f\xb7" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "createAccount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KBEMain_eventcreateAccount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_destroyKBEngine()
	{
		struct KBEMain_eventdestroyKBEngine_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KBEMain_eventdestroyKBEngine_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KBEMain_eventdestroyKBEngine_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
				{ "ToolTip", "\xe5\x9c\xa8\xe7\xa8\x8b\xe5\xba\x8f\xe5\x85\xb3\xe9\x97\xad\xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe4\xb8\xbb\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8, \xe5\xbd\xbb\xe5\xba\x95\xe9\x94\x80\xe6\xaf\x81KBEngine" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "destroyKBEngine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventdestroyKBEngine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_getClientScriptVersion()
	{
		struct KBEMain_eventgetClientScriptVersion_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KBEMain_eventgetClientScriptVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "getClientScriptVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventgetClientScriptVersion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_getClientVersion()
	{
		struct KBEMain_eventgetClientVersion_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KBEMain_eventgetClientVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "getClientVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventgetClientVersion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_getComponentName()
	{
		struct KBEMain_eventgetComponentName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KBEMain_eventgetComponentName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
				{ "ToolTip", "\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xb1\x9e\xe4\xba\x8eKBE\xe6\xa1\x86\xe6\x9e\xb6\xe4\xb8\xad\xe7\x9a\x84\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8a\x9f\xe8\x83\xbd\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb0\x86\xe5\x9b\xba\xe5\xae\x9a\xe8\xbf\x94\xe5\x9b\x9e""client" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "getComponentName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventgetComponentName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_getServerScriptVersion()
	{
		struct KBEMain_eventgetServerScriptVersion_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KBEMain_eventgetServerScriptVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "getServerScriptVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventgetServerScriptVersion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_getServerVersion()
	{
		struct KBEMain_eventgetServerVersion_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KBEMain_eventgetServerVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "getServerVersion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventgetServerVersion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKBEMain_login()
	{
		struct KBEMain_eventlogin_Parms
		{
			FString username;
			FString password;
			TArray<uint8> datas;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((KBEMain_eventlogin_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KBEMain_eventlogin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_datas = { UE4CodeGen_Private::EPropertyClass::Array, "datas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KBEMain_eventlogin_Parms, datas), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_datas_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "datas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_password = { UE4CodeGen_Private::EPropertyClass::Str, "password", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KBEMain_eventlogin_Parms, password), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KBEMain_eventlogin_Parms, username), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_datas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_datas_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_password,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_username,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKBEMain, "login", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KBEMain_eventlogin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKBEMain_NoRegister()
	{
		return UKBEMain::StaticClass();
	}
	UClass* Z_Construct_UClass_UKBEMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_KBEnginePlugins,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKBEMain_createAccount, "createAccount" }, // 750667475
				{ &Z_Construct_UFunction_UKBEMain_destroyKBEngine, "destroyKBEngine" }, // 2787211885
				{ &Z_Construct_UFunction_UKBEMain_getClientScriptVersion, "getClientScriptVersion" }, // 680289226
				{ &Z_Construct_UFunction_UKBEMain_getClientVersion, "getClientVersion" }, // 2248952509
				{ &Z_Construct_UFunction_UKBEMain_getComponentName, "getComponentName" }, // 793598200
				{ &Z_Construct_UFunction_UKBEMain_getServerScriptVersion, "getServerScriptVersion" }, // 3812874905
				{ &Z_Construct_UFunction_UKBEMain_getServerVersion, "getServerVersion" }, // 3703016028
				{ &Z_Construct_UFunction_UKBEMain_login, "login" }, // 3515532087
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "KBEngine" },
				{ "DisplayName", "KBEngine Main" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming" },
				{ "IncludePath", "Engine/KBEMain.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RECV_BUFFER_MAX_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RECV_BUFFER_MAX = { UE4CodeGen_Private::EPropertyClass::Int, "RECV_BUFFER_MAX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, RECV_BUFFER_MAX), METADATA_PARAMS(NewProp_RECV_BUFFER_MAX_MetaData, ARRAY_COUNT(NewProp_RECV_BUFFER_MAX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SEND_BUFFER_MAX_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SEND_BUFFER_MAX = { UE4CodeGen_Private::EPropertyClass::Int, "SEND_BUFFER_MAX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, SEND_BUFFER_MAX), METADATA_PARAMS(NewProp_SEND_BUFFER_MAX_MetaData, ARRAY_COUNT(NewProp_SEND_BUFFER_MAX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverHeartbeatTick_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_serverHeartbeatTick = { UE4CodeGen_Private::EPropertyClass::Int, "serverHeartbeatTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, serverHeartbeatTick), METADATA_PARAMS(NewProp_serverHeartbeatTick_MetaData, ARRAY_COUNT(NewProp_serverHeartbeatTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOnInitCallPropertysSetMethods_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			auto NewProp_isOnInitCallPropertysSetMethods_SetBit = [](void* Obj){ ((UKBEMain*)Obj)->isOnInitCallPropertysSetMethods = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnInitCallPropertysSetMethods = { UE4CodeGen_Private::EPropertyClass::Bool, "isOnInitCallPropertysSetMethods", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKBEMain), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isOnInitCallPropertysSetMethods_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isOnInitCallPropertysSetMethods_MetaData, ARRAY_COUNT(NewProp_isOnInitCallPropertysSetMethods_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useAliasEntityID_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			auto NewProp_useAliasEntityID_SetBit = [](void* Obj){ ((UKBEMain*)Obj)->useAliasEntityID = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useAliasEntityID = { UE4CodeGen_Private::EPropertyClass::Bool, "useAliasEntityID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKBEMain), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_useAliasEntityID_SetBit)>::SetBit, METADATA_PARAMS(NewProp_useAliasEntityID_MetaData, ARRAY_COUNT(NewProp_useAliasEntityID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_syncPlayerMS_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_syncPlayerMS = { UE4CodeGen_Private::EPropertyClass::Int, "syncPlayerMS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, syncPlayerMS), METADATA_PARAMS(NewProp_syncPlayerMS_MetaData, ARRAY_COUNT(NewProp_syncPlayerMS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientType_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_clientType = { UE4CodeGen_Private::EPropertyClass::Enum, "clientType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, clientType), Z_Construct_UEnum_KBEnginePlugins_EKCLIENT_TYPE, METADATA_PARAMS(NewProp_clientType_MetaData, ARRAY_COUNT(NewProp_clientType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_clientType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_port_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_port = { UE4CodeGen_Private::EPropertyClass::Int, "port", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, port), METADATA_PARAMS(NewProp_port_MetaData, ARRAY_COUNT(NewProp_port_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ip_MetaData[] = {
				{ "Category", "KBEngine" },
				{ "ModuleRelativePath", "Engine/KBEMain.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip = { UE4CodeGen_Private::EPropertyClass::Str, "ip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKBEMain, ip), METADATA_PARAMS(NewProp_ip_MetaData, ARRAY_COUNT(NewProp_ip_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RECV_BUFFER_MAX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SEND_BUFFER_MAX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_serverHeartbeatTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isOnInitCallPropertysSetMethods,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_useAliasEntityID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_syncPlayerMS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_clientType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_clientType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_port,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ip,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKBEMain>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKBEMain::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKBEMain, 1213312650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKBEMain(Z_Construct_UClass_UKBEMain, &UKBEMain::StaticClass, TEXT("/Script/KBEnginePlugins"), TEXT("UKBEMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKBEMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
