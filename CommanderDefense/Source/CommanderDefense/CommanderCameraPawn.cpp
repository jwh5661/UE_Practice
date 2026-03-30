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

	// WASD 이동 로직

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

	// 엣지 스크롤링 로직

	float MouseX, MouseY;

	// 1. 마우스 현재 좌표를 가져옴 ( 마우스가 화면 밖이면 false를 반환하므로 체크 필수 )
	if (PC->GetMousePosition(MouseX, MouseY))
	{
		// 2. 현재 뷰포트( 화면 ) 크기를 가져옴
		FVector2D ViewportSize;
		if (GEngine && GEngine->GameViewport)
		{
			GEngine->GameViewport->GetViewportSize(ViewportSize);
		}

		FVector EdgeMoveInput = FVector::ZeroVector;

		// 3. 마우스가 X축( 좌/우 ) 가장자리에 있는지 검사
		if (MouseX <= EdgeScrollZone) // 마우스가 왼쪽 끝에 닿음
		{
			EdgeMoveInput.Y -= 1.0f;
		}
		else if (MouseX >= ViewportSize.X - EdgeScrollZone) // 오른쪽 끝
		{
			EdgeMoveInput.Y += 1.0f;
		}

		// 4. 마우스가 Y축( 상/하 ) 가장자리에 있는지 검사 ( 언리얼 화면 좌표는 맨 위가 0, 아래가 Max )
		if (MouseY <= EdgeScrollZone) // 화면 위쪽 끝
		{
			EdgeMoveInput.X += 1.0f;
		}
		else if (MouseY >= ViewportSize.Y - EdgeScrollZone) // 화면 아래쪽 끝
		{
			EdgeMoveInput.X -= 1.0f;
		}

		if (!EdgeMoveInput.IsNearlyZero())
		{
			EdgeMoveInput.Normalize();
			AddActorWorldOffset(EdgeMoveInput * EdgeScrollSpeed * DeltaTime);
		}
	}

	// 줌인/줌아웃 로직

	if (PC)
	{
		// EKeys::MouseWheelAxis는 휠을 위로 굴리면 양수( 1.0 ), 아래로 굴리면 음수( -1.0 )를 뱉어냄
		float WheelInput = PC->GetInputAnalogKeyState(EKeys::MouseWheelAxis);

		if (FMath::Abs(WheelInput) > 0.0f) // 휠을 조금이라도 굴렸다면
		{
			// 휠을 위로( 양수 ) 굴리면 가까워져야 하므로 셀카봉 길이를 빼준다
			float TargetLength = SpringArm->TargetArmLength - (WheelInput * ZoomSpeed);

			// FMath::Clamp: TargetLength값이 MinZoom보다 작아지거나 MaxZoom보다 커지는 걸 방어
			SpringArm->TargetArmLength = FMath::Clamp(TargetLength, MinZoom, MaxZoom);
		}
	}
}

// Called to bind functionality to input
void ACommanderCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

