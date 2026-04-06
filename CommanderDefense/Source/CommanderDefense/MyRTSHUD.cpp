// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRTSHUD.h"

#include "MyRTSPlayerController.h"
#include "GameFramework/Character.h"
#include "MyRTSCharacter.h"
#include "CommanderCameraPawn.h"

void AMyRTSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (bIsDrawing)
	{
		// 1. 플레이어 컨트롤러를 가져와서 현재 마우스 위치를 갱신
		AMyRTSPlayerController* PC = Cast<AMyRTSPlayerController>(GetOwningPlayerController());
		if (PC)
		{
			float MouseX, MouseY;
			PC->GetMousePosition(MouseX, MouseY);
			CurrentPoint = FVector2D(MouseX, MouseY);
		}

		// 2. 사각형 그리기 ( 색상 : RGBA 초록색 투명도 0.2 )
		// DrawRect( 색상, 시작X, 시작Y, 가로 길이, 세로 길이 )
		DrawRect(FLinearColor(0.0f, 1.0f, 0.0f, 0.2f),
			InitialPoint.X, InitialPoint.Y,
			CurrentPoint.X - InitialPoint.X, CurrentPoint.Y - InitialPoint.Y);
	}

	if (bShouldSelect)
	{
		bShouldSelect = false;

		TArray<AMyRTSCharacter*> SelectedUnit;
		// 3. 사각형 안의 유닛들 긁어오기
		GetActorsInSelectionRectangle<AMyRTSCharacter>(InitialPoint, CurrentPoint, SelectedUnit, false, false);

		ACommanderCameraPawn* CommanderCameraPawn = Cast<ACommanderCameraPawn>(GetOwningPawn());
		if (CommanderCameraPawn)
		{
			CommanderCameraPawn->UpdateSelectedUnits(SelectedUnit);
		}

		// 4. ( 디버그 ) 몇 명이나 선택됐는지 화면에 출력
		if (SelectedUnit.Num() > 0)
		{
			FString Msg = FString::Printf(TEXT("선택된 유닛 수 : %d"), SelectedUnit.Num());
			GEngine->AddOnScreenDebugMessage(1, 0.1f, FColor::Yellow, Msg);
		}
	}
}
