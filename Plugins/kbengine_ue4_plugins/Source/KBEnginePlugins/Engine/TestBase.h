/*
	Generated by KBEngine!
	Please do not modify this file!
	Please inherit this module, such as: (class Test : public TestBase)
	tools = kbcmd
*/

#pragma once
#include "KBECommon.h"
#include "EntityComponent.h"
#include "KBETypes.h"
#include "ServerErrorDescrs.h"
#include "EntityCallTestBase.h"

class Method;
class Property;
class MemoryStream;

// defined in */scripts/entity_defs/Test.def
class KBENGINEPLUGINS_API TestBase : public EntityComponent
{
public:
	EntityBaseEntityCall_TestBase* pBaseEntityCall;
	EntityCellEntityCall_TestBase* pCellEntityCall;

	int32 own;
	virtual void onOwnChanged(int32 oldValue) {}
	int32 state;
	virtual void onStateChanged(int32 oldValue) {}

	virtual void helloCB(int32 arg1) = 0; 

	void createFromStream(MemoryStream& stream) override;

	void onRemoteMethodCall(uint16 methodUtype, MemoryStream& stream) override;
	void onUpdatePropertys(uint16 propUtype, MemoryStream& stream, int maxCount) override;
	void callPropertysSetMethods() override;

	TestBase();
	virtual ~TestBase();

};

