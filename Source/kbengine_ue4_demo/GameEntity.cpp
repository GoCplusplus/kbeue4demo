// Fill out your copyright notice in the Description page of Project Settings.

#include "GameEntity.h"
#include "kbengine_ue4_demo.h"
#include "GameModeWorld.h"
#include "Engine/KBEngine.h"
#include "Engine/Entity.h"

// Sets default values
AGameEntity::AGameEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	entityID = 0;
	moveSpeed = 0.f;
	isOnGround = false;
}

// Called when the game starts or when spawned
void AGameEntity::BeginPlay()
{
	Super::BeginPlay();
	
	auto XGameMode = Cast<AGameModeWorld>(UGameplayStatics::GetGameMode(this));
	
	if (XGameMode)
	{
		// ���Լ�ע�ᵽAGameModeWorld������������
		XGameMode->addGameEntity(this->entityID, this);

		Entity* pEntity = KBEngineApp::getSingleton().findEntity(entityID);

		// ����UE4���ӻ�ʵ�崴��Ҫ����KBE�Ĳ�����߼�ʵ�壬��KBE���ʵ����ǰ�����Ѿ�������һЩ���������¼�
		// ��˴�ʱ���ǿ����Ѿ������һЩ�¼�������ֻ���ڴ˲��ȱ�Ҫ�Ĵ����ˣ� ���磺���ƺ�Ѫ������ֵ
		if (pEntity)
			pEntity->callPropertysSetMethods();
	}
}

void AGameEntity::Destroyed()
{
	Super::Destroyed();

	auto XGameMode = Cast<AGameModeWorld>(UGameplayStatics::GetGameMode(this));

	if (XGameMode)
	{
		// ���Լ�ע�ᵽAGameModeWorld������������
		XGameMode->removeGameEntity(this->entityID);
	}
}

void AGameEntity::updateLocation(float DeltaTime)
{
	const FVector& currLocation = GetActorLocation();

	//Direction from Self to targetPos
	FVector vectorDirection = targetLocation - currLocation;

	float deltaSpeed = (moveSpeed * 10.f /*���ڷ���˽ű�moveSpeed�ĵ�λ�����ף�������Ҫת��ΪUE4��λ����*/) * DeltaTime;
	if (vectorDirection.Size() > deltaSpeed)
	{
		//Normalize Vector so it is just a direction
		vectorDirection.Normalize();

		//Move moveSpeed units toward the player, per tick
		SetActorLocation(currLocation + (vectorDirection * deltaSpeed));
	}
	else
	{
		SetActorLocation(targetLocation);
	}

	FaceRotation(targetRotator, DeltaTime);
}

// Called every frame
void AGameEntity::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	if (!isPlayer())
	{
		updateLocation(DeltaTime);
	}
}

// Called to bind functionality to input
void AGameEntity::SetupPlayerInputComponent(class UInputComponent* inputComponent)
{
	Super::SetupPlayerInputComponent(inputComponent);

}

void AGameEntity::FaceRotation(FRotator NewRotation, float DeltaTime)
{
	FRotator CurrentRotation = FMath::RInterpTo(GetActorRotation(), NewRotation, DeltaTime, 8.0f);

	Super::FaceRotation(CurrentRotation, DeltaTime);
}

