// Fill out your copyright notice in the Description page of Project Settings.


#include "CommanderCameraPawn.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACommanderCameraPawn::ACommanderCameraPawn()
{
 	// 카메라 이동 로직에 필요함
	PrimaryActorTick.bCanEverTick = true;

	// 1. 가장 밑바탕이 되는 루트 컴포넌트 생성
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// 2. 셀카봉 생성 및 루트에 부착
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SprintArm"));
	SpringArm->SetupAttachment(RootComponent);

	// RTS 탑다운 시점을 위한 셀카봉 세팅
	SpringArm->TargetArmLength = 2000.0f; // 카메라를 20미터 위로 띄움
	SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f)); // 아래로 60도 꺾어 내림
	SpringArm->bDoCollisionTest = false; // 지형지물에 부딪혀도 카메라가 줌인되지 않도록 ( RTS 필수요소임 )

	// 3.카메라 생성 및 셀카봉 끝에 매달기
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	// 여기서 두 번째 인자 안쓰면 셀카봉을 쥐고 있는 손잡이에 카메라를 달게 됨
	// 두 번째 인자가 있어야 셀카봉의 끄트머리에 달 수 있음
	CameraComp->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void ACommanderCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACommanderCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 카메라의 이동 방향을 담을 빈 벡터
	FVector MoveInput = FVector::ZeroVector;

	// 내 카메라에 빙의한 플레이어 컨트롤러( 뇌 )를 가져온다
	APlayerController* PC = Cast<APlayerController>(GetController());

	if (PC)
	{
		// 언리얼 기본 키 검사 ( 직관적으로 할 때 )
		if (PC->IsInputKeyDown(EKeys::W)) MoveInput.X += 1.0f; // 앞으로 ( X축 )
		if (PC->IsInputKeyDown(EKeys::S)) MoveInput.X -= 1.0f; // 뒤로 ( X축 )
		if (PC->IsInputKeyDown(EKeys::A)) MoveInput.Y -= 1.0f; // 왼쪽으로 ( Y축 )
		if (PC->IsInputKeyDown(EKeys::D)) MoveInput.Y += 1.0f; // 오른쪽으로 ( Y축 )
	}

	if (!MoveInput.IsNearlyZero())
	{
		MoveInput.Normalize(); // 대각선으로 갈 때 더 빨라지는 걸 막아주는 코드

		float MoveSpeed = 2000.0f; // 카메라 이동 속도

		// 현재 위치에서 방향 * 속도 * 시간만큼 더해서 이동시킨다
		AddActorWorldOffset(MoveInput * MoveSpeed * DeltaTime);
	}
}

// Called to bind functionality to input
void ACommanderCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

