#include "TestNoBase.h"
#include "Scripts/Avatar.h"
#include "Scripts/LogicEvents.h"

TestNoBase::TestNoBase():
	TestNoBaseBase()
{
}

TestNoBase::~TestNoBase()
{
}

void TestNoBase::onOwnChanged(int32 oldValue) {
	DEBUG_MSG("TestNoBase::onOwnChanged: own(%d)!", oldValue);
}

void TestNoBase::onStateChanged(int32 oldValue) {
	DEBUG_MSG("TestNoBase::onOwnChanged: state(%d)!", oldValue);
}

void TestNoBase::helloCB(int32 arg1)
{
	DEBUG_MSG("TestNoBase::helloCB: arg1(%d)!", arg1);

	// �п��ܻ�û�д���cell������pCellEntityCall����Ϊ��
	if(pCellEntityCall)
		pCellEntityCall->hello(795);
}
