// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyRTSHUD.generated.h"

/**
 * 
 */
UCLASS()
class COMMANDERDEFENSE_API AMyRTSHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;

public:
	FVector2D InitialPoint; // 클릭 시작점
	FVector2D CurrentPoint; // 현재 마우스 위치
	bool bIsDrawing = false; // 드래그 중인지 체크
	bool bShouldSelect = false;
};
