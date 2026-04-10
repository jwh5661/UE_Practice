// Fill out your copyright notice in the Description page of Project Settings.


#include "CommanderCameraPawn.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "MyRTSHUD.h"
#include "MyRTSPlayerController.h"
#include "MyRTSCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "GameFramework/FloatingPawnMovement.h"

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
	TargetZoomLength = 2000.0f;
	SpringArm->TargetArmLength = TargetZoomLength; // 카메라를 20미터 위로 띄움
	SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f)); // 아래로 60도 꺾어 내림
	SpringArm->bDoCollisionTest = false; // 지형지물에 부딪혀도 카메라가 줌인되지 않도록 ( RTS 필수요소임 )

	// 3.카메라 생성 및 셀카봉 끝에 매달기
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	// 여기서 두 번째 인자 안쓰면 셀카봉을 쥐고 있는 손잡이에 카메라를 달게 됨
	// 두 번째 인자가 있어야 셀카봉의 끄트머리에 달 수 있음
	CameraComp->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	// 지휘관 이동을 처리할 비행 무브먼트 컴포넌트 생성
	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

	// 이동 속도 설정
	MovementComponent->MaxSpeed = 2000.0f; // 최고 속도
	MovementComponent->Acceleration = 4000.0f; // 가속도
	MovementComponent->Deceleration = 4000.0f; // 감속도 ( 마우스 놓았을 때 미끄러지는 정도 )
}

// Called when the game starts or when spawned
void ACommanderCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// 좌클릭 눌렀을 때
// void ACommanderCameraPawn::OnLeftMousePressed()
// {
// 	// 1. 내 영혼( Controller )을 찾는다
// 	AMyRTSPlayerController* PC = Cast<AMyRTSPlayerController>(GetController());
// 	if (PC)
// 	{
// 		// 2. 그 영혼이 보고 있는 HUD를 찾는다
// 		AMyRTSHUD* MyHUD = Cast<AMyRTSHUD>(PC->GetHUD());
// 		if(MyHUD)
// 		{ 
// 			// 3. HUD한테 사각형 그리라고 명령
// 			MyHUD->bIsDrawing = true;
// 
// 			float MouseX, MouseY;
// 			PC->GetMousePosition(MouseX, MouseY);
// 			MyHUD->InitialPoint = FVector2D(MouseX, MouseY);
// 		}
// 	}
// }
// 
// void ACommanderCameraPawn::OnLeftMouseRelesed()
// {
// 	AMyRTSPlayerController* PC = Cast<AMyRTSPlayerController>(GetController());
// 
// 	if (PC)
// 	{
// 		AMyRTSHUD* MyHUD = Cast<AMyRTSHUD>(PC->GetHUD());
// 
// 		if (MyHUD)
// 		{
// 			MyHUD->bIsDrawing = false;
// 
// 			float MouseX, MouseY;
// 			PC->GetMousePosition(MouseX, MouseY);
// 			FVector2D EndPoint(MouseX, MouseY);
// 
// 			float DragDistance = FVector2D::Distance(MyHUD->InitialPoint, EndPoint);
// 
// 			if (DragDistance < 15.0f)
// 			{
// 				// 2. 레이저가 부딪힌 결과를 담을 빈 바구니( 구조체 ) 준비
// 				FHitResult HitResult;
// 
// 				// 3. 마우스 커서 아래로 레이저 발사 ( 가시성 채널 기준 )
// 				// ECC_Visibility : 화면에 보이는( 가려지지 않은 ) 물체에 부딪히게 함
// 				bool bHit = PC->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
// 
// 				// 4. 레이저가 뭔가에 맞았고, 그 맞은 물체( Actor )가 실제로 존재한다면?
// 				if (bHit && HitResult.GetActor())
// 				{
// 					AMyRTSCharacter* ClickedUnit = Cast<AMyRTSCharacter>(HitResult.GetActor());
// 
// 					if (ClickedUnit)
// 					{
// 						TArray<AMyRTSCharacter*> SingleUnitArr;
// 						SingleUnitArr.Add(ClickedUnit);
// 
// 						UpdateSelectedUnits(SingleUnitArr);
// 						// 5. 맞은 액터의 이름을 문자열로 가져온다.
// 						FString HitActorName = HitResult.GetActor()->GetName();
// 
// 						// 6. 화면 왼쪽 위에 빨간색 디버그 메시지로 띄워주기
// 						if (GEngine)
// 						{
// 							GEngine->AddOnScreenDebugMessage(
// 								-1,
// 								3.0f, // 3초 동안 표시
// 								FColor::Cyan,
// 								FString::Printf(TEXT("선택된 유닛 : %s"), *HitActorName)
// 							);
// 						}
// 					}
// 					else
// 					{
// 						TArray<AMyRTSCharacter*> NoUnitArr;
// 						UpdateSelectedUnits(NoUnitArr);
// 						CurrentlySelectedUnit.Empty();
// 					}
// 				}
// 			}
// 			else
// 			{
// 				MyHUD->bIsDrawing = false;
// 				MyHUD->bShouldSelect = true;
// 			}
// 		}
// 	}
// }
// 
// Called every frame
void ACommanderCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// WASD 이동 로직

	// 카메라의 이동 방향을 담을 빈 벡터
	FVector MoveInput = FVector::ZeroVector;

	// 내 카메라에 빙의한 플레이어 컨트롤러( 뇌 )를 가져온다
	APlayerController* PC = Cast<APlayerController>(GetController());

	//if (PC)
	//{
	//	// 언리얼 기본 키 검사 ( 직관적으로 할 때 )
	//	if (PC->IsInputKeyDown(EKeys::W)) MoveInput.X += 1.0f; // 앞으로 ( X축 )
	//	if (PC->IsInputKeyDown(EKeys::S)) MoveInput.X -= 1.0f; // 뒤로 ( X축 )
	//	if (PC->IsInputKeyDown(EKeys::A)) MoveInput.Y -= 1.0f; // 왼쪽으로 ( Y축 )
	//	if (PC->IsInputKeyDown(EKeys::D)) MoveInput.Y += 1.0f; // 오른쪽으로 ( Y축 )
	//}
	//
	//if (!MoveInput.IsNearlyZero())
	//{
	//	MoveInput.Normalize(); // 대각선으로 갈 때 더 빨라지는 걸 막아주는 코드
	//
	//	float MoveSpeed = 2000.0f; // 카메라 이동 속도
	//
	//	// 현재 위치에서 방향 * 속도 * 시간만큼 더해서 이동시킨다
	//	AddActorWorldOffset(MoveInput * MoveSpeed * DeltaTime);
	//}

	// 엣지 스크롤링 로직

	// float MouseX, MouseY;

	// 1. 마우스 현재 좌표를 가져옴 ( 마우스가 화면 밖이면 false를 반환하므로 체크 필수 )
	// if (PC->GetMousePosition(MouseX, MouseY))
	// {
	// 	// 2. 현재 뷰포트( 화면 ) 크기를 가져옴
	// 	FVector2D ViewportSize;
	// 	if (GEngine && GEngine->GameViewport)
	// 	{
	// 		GEngine->GameViewport->GetViewportSize(ViewportSize);
	// 	}
	// 
	// 	FVector EdgeMoveInput = FVector::ZeroVector;
	// 
	// 	// 3. 마우스가 X축( 좌/우 ) 가장자리에 있는지 검사
	// 	if (MouseX <= EdgeScrollZone) // 마우스가 왼쪽 끝에 닿음
	// 	{
	// 		EdgeMoveInput.Y -= 1.0f;
	// 	}
	// 	else if (MouseX >= ViewportSize.X - EdgeScrollZone) // 오른쪽 끝
	// 	{
	// 		EdgeMoveInput.Y += 1.0f;
	// 	}
	// 
	// 	// 4. 마우스가 Y축( 상/하 ) 가장자리에 있는지 검사 ( 언리얼 화면 좌표는 맨 위가 0, 아래가 Max )
	// 	if (MouseY <= EdgeScrollZone) // 화면 위쪽 끝
	// 	{
	// 		EdgeMoveInput.X += 1.0f;
	// 	}
	// 	else if (MouseY >= ViewportSize.Y - EdgeScrollZone) // 화면 아래쪽 끝
	// 	{
	// 		EdgeMoveInput.X -= 1.0f;
	// 	}
	// 
	// 	if (!EdgeMoveInput.IsNearlyZero())
	// 	{
	// 		EdgeMoveInput.Normalize();
	// 		AddActorWorldOffset(EdgeMoveInput * EdgeScrollSpeed * DeltaTime);
	// 	}
	// }

	// 우클릭 드래그 로직

	// 1. 마우스가 화면 안에 있을 때만 작동
	// if (PC->GetMousePosition(MouseX, MouseY))
	// {
	// 	// 2. 우클릭이 눌려있는가?
	// 	if (PC->IsInputKeyDown(EKeys::RightMouseButton))
	// 	{
	// 		// 3. 방금 막 클릭을 시작했다면 초기화
	// 		if (!bIsPanning)
	// 		{
	// 			bIsPanning = true;
	// 			LastMousePosition = FVector2D(MouseX, MouseY); // 현재 위치를 시작점으로 저장
	// 		}
	// 		// 4. 이미 클릭해서 드래그 중이라면 이동
	// 		else
	// 		{
	// 			// 현재 위치 - 이전 위치 = 마우스가 이동한 변화량( Delta )
	// 			float DeltaX = MouseX - LastMousePosition.X;
	// 			float DeltaY = MouseY - LastMousePosition.Y;
	// 
	// 			// 핵심 : 좌표계 크로스 매핑 & 반대 방향( - ) 적용
	// 			// 마우스 Y축 이동( 위아래 ) -> 카메라 X축( 앞뒤 ) 조절
	// 			// 마우스 X축 이동( 좌우 ) -> 카메라 Y축( 좌우 ) 조절
	// 			FVector PanMoveInput(DeltaY, -DeltaX, 0.0f);
	// 
	// 			// 카메라 이동
	// 			AddActorWorldOffset(PanMoveInput * PanSpeed * DeltaTime);
	// 
	// 			// 다음 프레임 계산을 위해 현재 위치를 갱신
	// 			LastMousePosition = FVector2D(MouseX, MouseY);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		bIsPanning = false;
	// 	}
	// }

	// 줌인/줌아웃 로직

	if (PC)
	{
		// EKeys::MouseWheelAxis는 휠을 위로 굴리면 양수( 1.0 ), 아래로 굴리면 음수( -1.0 )를 뱉어냄
		float WheelInput = PC->GetInputAnalogKeyState(EKeys::MouseWheelAxis);

		if (FMath::Abs(WheelInput) > 0.0f) // 휠을 조금이라도 굴렸다면 목표 길이만 갱신한다.
		{
			TargetZoomLength -= (WheelInput * ZoomSpeed);
			TargetZoomLength = FMath::Clamp(TargetZoomLength, MinZoom, MaxZoom);
			// FMath::Clamp: TargetLength값이 MinZoom보다 작아지거나 MaxZoom보다 커지는 걸 방어
			
		}

		SpringArm->TargetArmLength =
			FMath::FInterpTo(
				SpringArm->TargetArmLength,
				TargetZoomLength,
				DeltaTime,
				10.0f
			);
	}

	// 좌클릭 유닛 선택 ( Raycasting ) 로직

	// 1, 방금 막 좌클릭을 '눌렀다 뗀' 찰나의 순간인가? ( 단발성 실행 )
	//if (PC->WasInputKeyJustPressed(EKeys::LeftMouseButton))
	//{
	//	// 2. 레이저가 부딪힌 결과를 담을 빈 바구니( 구조체 ) 준비
	//	FHitResult HitResult;
	//
	//	// 3. 마우스 커서 아래로 레이저 발사 ( 가시성 채널 기준 )
	//	// ECC_Visibility : 화면에 보이는( 가려지지 않은 ) 물체에 부딪히게 함
	//	bool bHit = PC->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
	//
	//	// 4. 레이저가 뭔가에 맞았고, 그 맞은 물체( Actor )가 실제로 존재한다면?
	//	if (bHit && HitResult.GetActor())
	//	{
	//		// 5. 맞은 액터의 이름을 문자열로 가져온다.
	//		FString HitActorName = HitResult.GetActor()->GetName();
	//
	//		// 6. 화면 왼쪽 위에 빨간색 디버그 메시지로 띄워주기
	//		if (GEngine)
	//		{
	//			GEngine->AddOnScreenDebugMessage(
	//				-1,
	//				3.0f, // 3초 동안 표시
	//				FColor::Red,
	//				FString::Printf(TEXT("선택된 유닛 : %s"), *HitActorName)
	//			);
	//		}
	//	}
	//}

	//if (PC->WasInputKeyJustPressed(EKeys::LeftMouseButton))
	//{
	//	OnLeftMousePressed();
	//}

	// f (PC->WasInputKeyJustReleased(EKeys::LeftMouseButton))
	// 
	// 	OnLeftMouseRelesed();
	// 

	// 우클릭 이동 명령 로직

	// if (PC->GetMousePosition(MouseX, MouseY))
	// {
	// 	FVector2D CurrentMousePos(MouseX, MouseY);
	// 
	// 	if (PC->WasInputKeyJustPressed(EKeys::RightMouseButton))
	// 	{
	// 		RightClickDownPosition = CurrentMousePos;
	// 	}
	// 
	// 	if (PC->WasInputKeyJustReleased(EKeys::RightMouseButton))
	// 	{
	// 		float DragDistance = FVector2D::Distance(RightClickDownPosition, CurrentMousePos);
	// 
	// 		if (DragDistance < 30.0f)
	// 		{
	// 			FHitResult HitResult;
	// 			if (PC->GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
	// 			{
	// 				//AActor* DummyUnit = UGameplayStatics::GetActorOfClass(GetWorld(), ACharacter::StaticClass());
	// 				//
	// 				//ACharacter* DummyCharacter = Cast<ACharacter>(DummyUnit);
	// 				//
	// 				//if (DummyCharacter && DummyCharacter->GetController())
	// 				//{
	// 				//	UAIBlueprintHelperLibrary::SimpleMoveToLocation(DummyCharacter->GetController(), HitResult.Location);
	// 				//	DrawDebugSphere(GetWorld(), HitResult.Location, 50.0f, 16, FColor::Green, false, 3.0f);
	// 				//}
	// 
	// 				int32 Columns = 3; // 한 줄에 3명씩 세운다고 가정
	// 				float Spacing = 150.0f; // 유닛 간의 간격 ( 150 픽셀 )
	// 
	// 				for (int32 i = 0; i < CurrentlySelectedUnit.Num(); i++)
	// 				{
	// 					// 1. 몫과 나머지로 2D 바둑판 인덱스 구하기
	// 					int32 Row = i / Columns; // 0, 0, 0, 1, 1, 1, 2, 2, 2...
	// 					int32 Col = i % Columns; // 0, 1, 2, 0, 1, 2, 0, 1, 2...
	// 
	// 					// 2. Row와 Col을 바탕으로 각 유닛의 전용 오프셋( Offset ) 계산
	// 					FVector Offset(Row* Spacing, Col* Spacing, 0.0f);
	// 
	// 					// 4. 최종 목적지 계산 ( 기본 좌표 + 오프셋 )
	// 					FVector FinalLocation = HitResult.Location + Offset;
	// 
	// 					UAIBlueprintHelperLibrary::SimpleMoveToLocation(
	// 						CurrentlySelectedUnit[i]->GetController(),
	// 						FinalLocation
	// 					);
	// 
	// 					// 5. 이동 상태로 변경
	// 					CurrentlySelectedUnit[i]->SetUnitState(ERTSUnitState::Move);
	// 
	// 					// 6. 이동 위치를 캐릭터에 저장
	// 					CurrentlySelectedUnit[i]->SetLocation(FinalLocation);
	// 				}
	// 
	// 				DrawDebugCircle(
	// 					GetWorld(),
	// 					HitResult.Location, 
	// 					50.0f, 
	// 					32, 
	// 					FColor::Green, 
	// 					false, 
	// 					0.5f,
	// 					0,
	// 					6.0f,
	// 					FVector(0, 1, 0),
	// 					FVector(1, 0, 0)
	// 				);
	// 			}
	// 		}
	// 	}
	// }

	// 아래는 우클릭 누르지마자 유닛 움직임.
	// 이렇게 하면 맵 끌다가 유닛 움직여짐
	// 
	// 1. 방금 막 우클릭을 눌렀다면? ( 단발성 실행 )
	//if (PC->WasInputKeyJustPressed(EKeys::RightMouseButton))
	//{
	//	FHitResult HitResult;
	//
	//	// 2. 마우스 커서 아래로 레이저 발사 ( 땅을 클릭했는지 확인 )
	//	bool bHit = PC->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
	//
	//	if (bHit)
	//	{
	//		// 3. 레이저가 부딪힌 땅의 3D 좌표를 가져옴
	//		FVector Destination = HitResult.Location;
	//
	//		// 4. ( 임시 ) 현재 컨트롤러가 조종 중인 캐릭터를 가져와서 해당 지점으로 이동
	//		// *실제 RTS에서는 선택된 유닛들에게 명령을 내려야 하지만, 지금은 테스트
	//		UAIBlueprintHelperLibrary::SimpleMoveToLocation(PC, Destination);
	//
	//		// 5. 클릭한 곳에 시각적 피드백 그려주기
	//		DrawDebugSphere(GetWorld(), Destination, 50.0f, 16, FColor::Green, false, 3.0f);
	//	}
	//}


}

// Called to bind functionality to input
void ACommanderCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 구형 인풋 컴포넌트를 Enhanced Input 컴포넌트로 형변환
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// 에디터에서 할당한 IA_Move 액션이 'Triggerd( 눌리는 중 )'일 때, Move 함수를 실행하라
		EnhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &ACommanderCameraPawn::Move);
	}

}

// void ACommanderCameraPawn::UpdateSelectedUnits(const TArray<AMyRTSCharacter*>& NewUnits)
// {
// 	// 1. 기존 애들 불 끄기
// 	for (AMyRTSCharacter* OldUnit : CurrentlySelectedUnit)
// 	{
// 		if (OldUnit) OldUnit->SetSelected(false);
// 	}
// 
// 	// 2. 명단 교체
// 	CurrentlySelectedUnit = NewUnits;
// 
// 	// 3. 새 애들 불 켜기
// 	for (AMyRTSCharacter* NewUnit : CurrentlySelectedUnit)
// 	{
// 		if (NewUnit) NewUnit->SetSelected(true);
// 	}
// }

void ACommanderCameraPawn::Move(const FInputActionValue& Value)
{
	// Axis2D로 설정했으므로 Vector2D로 값을 가져옵니다.
	FVector2D MovementVector = Value.Get<FVector2D>();

	// X값( 좌우 )과 Y값( 전후 )을 바탕으로 이동 로직 구현
	AddMovementInput(FVector::ForwardVector, MovementVector.Y);
	AddMovementInput(FVector::RightVector, MovementVector.X);
}

