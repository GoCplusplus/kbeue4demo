// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KBENGINEPLUGINS_KBEMain_generated_h
#error "KBEMain.generated.h already included, missing '#pragma once' in KBEMain.h"
#endif
#define KBENGINEPLUGINS_KBEMain_generated_h

#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcreateAccount) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_datas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->createAccount(Z_Param_username,Z_Param_password,Z_Param_Out_datas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlogin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_TARRAY(uint8,Z_Param_datas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->login(Z_Param_username,Z_Param_password,Z_Param_datas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execdestroyKBEngine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->destroyKBEngine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetComponentName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getComponentName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetServerScriptVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getServerScriptVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetServerVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getServerVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetClientScriptVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getClientScriptVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetClientVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getClientVersion(); \
		P_NATIVE_END; \
	}


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcreateAccount) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_datas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->createAccount(Z_Param_username,Z_Param_password,Z_Param_Out_datas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlogin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_GET_TARRAY(uint8,Z_Param_datas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->login(Z_Param_username,Z_Param_password,Z_Param_datas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execdestroyKBEngine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->destroyKBEngine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetComponentName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getComponentName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetServerScriptVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getServerScriptVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetServerVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getServerVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetClientScriptVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getClientScriptVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetClientVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getClientVersion(); \
		P_NATIVE_END; \
	}


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKBEMain(); \
	friend KBENGINEPLUGINS_API class UClass* Z_Construct_UClass_UKBEMain(); \
public: \
	DECLARE_CLASS(UKBEMain, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/KBEnginePlugins"), NO_API) \
	DECLARE_SERIALIZER(UKBEMain) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUKBEMain(); \
	friend KBENGINEPLUGINS_API class UClass* Z_Construct_UClass_UKBEMain(); \
public: \
	DECLARE_CLASS(UKBEMain, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/KBEnginePlugins"), NO_API) \
	DECLARE_SERIALIZER(UKBEMain) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKBEMain(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKBEMain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKBEMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKBEMain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKBEMain(UKBEMain&&); \
	NO_API UKBEMain(const UKBEMain&); \
public:


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKBEMain(UKBEMain&&); \
	NO_API UKBEMain(const UKBEMain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKBEMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKBEMain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKBEMain)


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_PRIVATE_PROPERTY_OFFSET
#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_17_PROLOG
#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_PRIVATE_PROPERTY_OFFSET \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_RPC_WRAPPERS \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_INCLASS \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_PRIVATE_PROPERTY_OFFSET \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_INCLASS_NO_PURE_DECLS \
	kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KBEMain."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID kbengine_ue4_demo_2_1_0_Plugins_kbengine_ue4_plugins_Source_KBEnginePlugins_Engine_KBEMain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
