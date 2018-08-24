// Fill out your copyright notice in the Description page of Project Settings.

#include "GameModeWorld.h"
#include "kbengine_ue4_demo.h"
#include "Engine/KBEngine.h"
#include "Engine/Entity.h"
#include "GameEntity.h"
#include "Engine/KBEvent.h"
#include "PlayerCharacter.h"

AGameModeWorld::AGameModeWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


void AGameModeWorld::installEvents()
{
	Super::installEvents();

	// in world
	// ����¼�����ʱ������Ҫ�л���ͼ����Ϸ�����ͼ
	KBENGINE_REGISTER_EVENT("addSpaceGeometryMapping", addSpaceGeometryMapping);
	KBENGINE_REGISTER_EVENT("onEnterWorld", onEnterWorld);
	KBENGINE_REGISTER_EVENT("onLeaveWorld", onLeaveWorld);
	KBENGINE_REGISTER_EVENT("onEnterSpace", onEnterSpace);
	KBENGINE_REGISTER_EVENT("onLeaveSpace", onLeaveSpace);
	KBENGINE_REGISTER_EVENT("set_position", set_position);
	KBENGINE_REGISTER_EVENT("set_direction", set_direction);
	KBENGINE_REGISTER_EVENT("updatePosition", updatePosition);
	KBENGINE_REGISTER_EVENT("onControlled", onControlled);

	// in world(register by scripts)
	KBENGINE_REGISTER_EVENT("set_HP", set_HP);
	KBENGINE_REGISTER_EVENT("set_MP", set_MP);
	KBENGINE_REGISTER_EVENT("set_HP_Max", set_HP_Max);
	KBENGINE_REGISTER_EVENT("set_MP_Max", set_MP_Max);
	KBENGINE_REGISTER_EVENT("set_level", set_level);
	KBENGINE_REGISTER_EVENT("set_name", set_name);
	KBENGINE_REGISTER_EVENT("set_moveSpeed", set_moveSpeed);
	KBENGINE_REGISTER_EVENT("set_modelScale", set_modelScale);
	KBENGINE_REGISTER_EVENT("set_modelID", set_modelID);
	KBENGINE_REGISTER_EVENT("set_entityNO", set_entityNO);
	KBENGINE_REGISTER_EVENT("set_flags", set_flags);
	KBENGINE_REGISTER_EVENT("set_state", set_state);
	KBENGINE_REGISTER_EVENT("set_subState", set_subState);
	KBENGINE_REGISTER_EVENT("set_forbids", set_forbids);
	KBENGINE_REGISTER_EVENT("recvDamage", recvDamage);
	KBENGINE_REGISTER_EVENT("otherAvatarOnJump", otherAvatarOnJump);
	KBENGINE_REGISTER_EVENT("onAddSkill", onAddSkill);
}

// Called when the game starts or when spawned
void AGameModeWorld::BeginPlay()
{
	Super::BeginPlay();

	check(KBEngineApp::getSingleton().isInitialized());

	// ����Ѿ��б�������ʵ�壬˵����������һ������δ���ü���ת֮ǰ�Ѿ�֪ͨ�����ˣ����������ǵ�world������û�����ü��������ⲿ��ʵ����������¼��Ѿ�©��
	// ��ʱ������Ҫ�ٴδ���һ��onEnterWorld���ñ��ֲ��ܹ�����Ϸ�����д��������е�ʵ��
	KBEngineApp::ENTITIES_MAP& entities = KBEngineApp::getSingleton().entities();
	for (auto& item : entities)
	{
		Entity* pEntity = item.Value;

		UKBEventData_onEnterWorld* pEventData = NewObject<UKBEventData_onEnterWorld>();
		pEventData->entityID = pEntity->id();
		pEventData->spaceID = KBEngineApp::getSingleton().spaceID();
		KBPos2UE4Pos(pEventData->position, pEntity->position);
		pEventData->direction = pEntity->direction;
		pEventData->moveSpeed = pEntity->velocity();
		pEventData->isOnGround = pEntity->isOnGround();
		pEventData->isPlayer = pEntity->isPlayer();
		pEventData->entityClassName = pEntity->className();
		pEventData->res = TEXT("");
		KBENGINE_EVENT_FIRE("onEnterWorld", pEventData);
	}
}

void AGameModeWorld::reqRelive(int reliveType)
{
	// ������ҵ�Avatarʵ��ע���˸��¼��� �����ʱAvatarʵ�������ô��Ȼ��ִ�е����¼� 
	UKBEventData_reqRelive* pEventData = NewObject<UKBEventData_reqRelive>();
	pEventData->reliveType = reliveType;
	KBENGINE_EVENT_FIRE("relive", pEventData);
}

AGameEntity* AGameModeWorld::findGameEntity(int entityID)
{
	AGameEntity** pGameEntity = gameEntities.Find(entityID);
	if (pGameEntity)
		return *pGameEntity;

	return NULL;
}

void AGameModeWorld::addGameEntity(int entityID, AGameEntity* entity)
{
	gameEntities.Add(entityID, entity);
}

void AGameModeWorld::removeGameEntity(int entityID)
{
	gameEntities.Remove(entityID);
}

void AGameModeWorld::addSpaceGeometryMapping_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::onEnterWorld_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_onEnterWorld* pData = Cast<UKBEventData_onEnterWorld>(pEventData);
	
	FRotator Rot(0.f, 0.f, 0.f);
	FTransform SpawnTransform(Rot, pData->position);

	if (pData->isPlayer)
	{
		TSubclassOf<class APlayerCharacter>& APlayerCharacterClass = PlayerCharacterClassArray[0];
		auto DeferredActor = Cast<APlayerCharacter>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APlayerCharacterClass, SpawnTransform));
		if (DeferredActor != nullptr)
		{
			DeferredActor->entityID = pData->entityID;
			DeferredActor->moveSpeed = pData->moveSpeed;
			UGameplayStatics::FinishSpawningActor(DeferredActor, SpawnTransform);
		}
	}
	else
	{
		TSubclassOf<class AGameEntity>& AGameEntityClass = GameEntityClassArray[0];
		auto DeferredActor = Cast<AGameEntity>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AGameEntityClass, SpawnTransform));
		if (DeferredActor != nullptr)
		{
			DeferredActor->entityID = pData->entityID;
			DeferredActor->moveSpeed = pData->moveSpeed;
			UGameplayStatics::FinishSpawningActor(DeferredActor, SpawnTransform);
		}
	}
}

void AGameModeWorld::onLeaveWorld_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_onLeaveWorld* pData = Cast<UKBEventData_onLeaveWorld>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
	{
		pAGameEntity->Destroy();
	}
}

void AGameModeWorld::onEnterSpace_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_onEnterSpace* pData = Cast<UKBEventData_onEnterSpace>(pEventData);

	FRotator Rot(0.f, 0.f, 0.f);
	FTransform SpawnTransform(Rot, pData->position);

	if (pData->isPlayer)
	{
		TSubclassOf<class APlayerCharacter>& APlayerCharacterClass = PlayerCharacterClassArray[0];
		auto DeferredActor = Cast<APlayerCharacter>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APlayerCharacterClass, SpawnTransform));
		if (DeferredActor != nullptr)
		{
			DeferredActor->entityID = pData->entityID;
			DeferredActor->moveSpeed = pData->moveSpeed;
			UGameplayStatics::FinishSpawningActor(DeferredActor, SpawnTransform);
		}
	}
	else
	{
		check(false);
	}
}

void AGameModeWorld::onLeaveSpace_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_onLeaveSpace* pData = Cast<UKBEventData_onLeaveSpace>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
	{
		pAGameEntity->Destroy();
	}
}

void AGameModeWorld::set_position_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_set_position* pData = Cast<UKBEventData_set_position>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
	{
		pAGameEntity->SetActorLocation(pData->position);
		pAGameEntity->setTargetLocation(pData->position);
		pAGameEntity->setIsOnGround(pData->isOnGround);
	}
}

void AGameModeWorld::set_direction_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_set_direction* pData = Cast<UKBEventData_set_direction>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
	{
		FRotator targetRotator;
		KBDir2UE4Dir(targetRotator, pData->direction);
		pAGameEntity->setTargetRotator(targetRotator);
	}
}

void AGameModeWorld::updatePosition_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_updatePosition* pData = Cast<UKBEventData_updatePosition>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
	{
		pAGameEntity->setTargetLocation(pData->position);
		pAGameEntity->setIsOnGround(pData->isOnGround);
	}
}

void AGameModeWorld::onControlled_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_HP_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_MP_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_HP_Max_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_MP_Max_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_level_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_name_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_moveSpeed_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_set_moveSpeed* pData = Cast<UKBEventData_set_moveSpeed>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
		pAGameEntity->moveSpeed = pData->moveSpeed;
}

void AGameModeWorld::set_modelScale_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_set_modelScale* pData = Cast<UKBEventData_set_modelScale>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
		pAGameEntity->modelScale = (float)(pData->modelScale / 100.0f);
}

void AGameModeWorld::set_modelID_Implementation(const UKBEventData* pEventData)
{
	const UKBEventData_set_modelID* pData = Cast<UKBEventData_set_modelID>(pEventData);
	AGameEntity* pAGameEntity = findGameEntity(pData->entityID);

	if (pAGameEntity)
		pAGameEntity->modelID = pData->modelID;
}

void AGameModeWorld::set_entityNO_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_flags_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_state_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_subState_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::set_forbids_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::recvDamage_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::otherAvatarOnJump_Implementation(const UKBEventData* pEventData)
{

}

void AGameModeWorld::onAddSkill_Implementation(const UKBEventData* pEventData)
{

}
