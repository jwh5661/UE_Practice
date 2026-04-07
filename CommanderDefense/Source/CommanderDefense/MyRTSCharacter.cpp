// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRTSCharacter.h"
#include "Components/DecalComponent.h"

// Sets default values
AMyRTSCharacter::AMyRTSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyRTSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyRTSCharacter::UpdateIdle()
{
	// 대기 상태일 때 할 일 ( 예 : 주변에 적이 있는지 레이더 돌리기 )
}

void AMyRTSCharacter::UpdateMove()
{
	// 이동 상태일 때 할 일 ( 예 : 목적지에 도착했는지 거리 체크해서, 도착했으면 Idle로 상태 변경 )
	
	// 1. 현재 위치와 목표 위치( 우클릭으로 찍었던 그 바둑판 오프셋 좌표 ) 사이의 거리를 잰다.
	// ( TargetLocation 변수는 우클릭 명령 시 해당 유닛 안에 저장해 두었다고 가정 )
	float DistanceToTarget = FVector::Dist2D(GetActorLocation(), TargetLocation);

	// 2. 거리가 허용 오차( 예 : 50.0f ) 안으로 들어왔다면 완벽히 도착한 것으로 간주
	if (DistanceToTarget <= 50.0f)
	{
		// 3. 지휘 통제실( SetUnitState )에 보고하여 상태를 대기( Idle )로 전환
		SetUnitState(ERTSUnitState::Idle);
	}
}

// Called every frame
void AMyRTSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// FSM. 매 프레임 내 상태가 뭔지 파악하고 그에 맞는 행동만 한다.
	switch (CurrentState)
	{
	case ERTSUnitState::Idle:
	{
		UpdateIdle();
		break;
	}
	case ERTSUnitState::Move:
	{
		UpdateMove();
		break;
	}
	case ERTSUnitState::Chase:
		break;
	case ERTSUnitState::Attack:
		break;
	case ERTSUnitState::Dead:
		break;
	default:
		break;
	}
}

// Called to bind functionality to input
void AMyRTSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyRTSCharacter::SetSelected(bool bSelected)
{
	UDecalComponent* SelectionDecal = FindComponentByClass<UDecalComponent>();

	if (SelectionDecal)
	{
		SelectionDecal->SetVisibility(bSelected);
	}
}

void AMyRTSCharacter::SetUnitState(ERTSUnitState NewState)
{
	if (CurrentState == NewState) return; // 이미 같은 상태면 무시

	// 상태가 변하기 전에 해야 할 일이 있다면 여기서 처리 ( 예 : 이전 애니메이션 끄기 등 )

	CurrentState = NewState;

	// 새로운 상태에 진입할 때 딱 한 번 해야 할 일 처리
	FString StateString;

	switch (CurrentState)
	{
	case ERTSUnitState::Idle:
	{
		StateString = TEXT("대기");
		break;
	}
	case ERTSUnitState::Move:
	{
		StateString = TEXT("이동");
		break;
	}
	case ERTSUnitState::Chase:
	{
		StateString = TEXT("추적");
		break;
	}
	case ERTSUnitState::Attack:
	{
		StateString = TEXT("공격");
		break;
	}
	case ERTSUnitState::Dead:
	{
		StateString = TEXT("사망");
		break;
	}
	default:
		break;
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			3.0f, // 3초 동안 표시
			FColor::Cyan,
			FString::Printf(TEXT("%s가 %s을 시작합니다"), *GetActorNameOrLabel(), *StateString)
		);
	}
}
