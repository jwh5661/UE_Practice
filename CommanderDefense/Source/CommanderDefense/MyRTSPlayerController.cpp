// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRTSPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DrawDebugHelpers.h"
#include "BuildingData.h"
#include "Engine/DataTable.h"

void AMyRTSPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 1. 현재 플레이어의 로컬 서브시스템을 가져옵니다.
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// 2. 에디터에서 IMC_Commander에 에셋을 잘 넣었는지 확인합니다.
		if (IMC_Commander)
		{
			// 3. 서브시스템에 우리의 매핑 컨텍스트를 추가합니다. ( 0은 우선순위 )
			Subsystem->AddMappingContext(IMC_Commander, 0);
		}
	}

	// 1. 마우스 커서를 화면에 보이게 합니다.
	bShowMouseCursor = true;

	// 2. 마우스가 UI와 게임 속 세상을 모두 클릭할 수 있게 입력 모드를 설정합니다.
	FInputModeGameAndUI InputMode;
	SetInputMode(InputMode);
}

void AMyRTSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// IA_Click 에셋을 에디터에서 연결해 두어야 합니다.
		EnhancedInputComponent->BindAction(IA_LeftClick, ETriggerEvent::Started, this, &AMyRTSPlayerController::OnLeftClick);
	}
}

void AMyRTSPlayerController::OnLeftClick()
{
	// 충돌 결과를 담을 구조체
	FHitResult HitResult;

	// 마우스 커서 위치에서 화면 안쪽으로 레이저를 쏴서 부딪힌 결과를 HitResult에 담아줍니다.
	// ECC_Visibility는 "눈에 보이는 것( Visibility 채널 )과 부딪혀라"라는 뜻입니다.
	bool bHit = GetHitResultUnderCursor(ECC_Visibility, false, HitResult);

	if (bHit)
	{
		// // 부딪힌 곳의 3D 좌표
		// FVector HitLocation = HitResult.ImpactPoint;
		// 
		// // 확인을 위해 그 위치에 반지름 50짜리 빨간색 구슬을 3초 동안 그립니다.
		// DrawDebugSphere(GetWorld(), HitLocation, 50.0f, 12, FColor::Red, false, 3.0f);
		// 
		// // 로그에도 띄워봅니다.
		// UE_LOG(LogTemp, Display, TEXT("지휘관이 클릭한 위치 : %s"), *HitLocation.ToString());

		// "Tavern"이라는 이름의 행을 찾습니다.
		// 실제 게임에선 버튼 클릭 등에 따라 이 이름이 변수로 들어오겠죠?
		if (BuildingDataTable)
		{
			static const FString ContextString(TEXT("BuildingDataLookup"));
			FBuildingData* FoundData = BuildingDataTable->FindRow<FBuildingData>(FName("Tavern"), ContextString);

			if (FoundData)
			{
				// 데이터를 성공적으로 가져왔다면 출력
				UE_LOG(LogTemp, Display, TEXT("건물 발견 : %s, 가격 : %d"), *FoundData->BuildingName.ToString(), FoundData->ConstructionCost);

				DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 30.0f, 12, FColor::Green, false, 3.f);
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("데이터 테이블에서 Tavern 행을 찾을 수 없습니다."));
			}
		}
	}
}
