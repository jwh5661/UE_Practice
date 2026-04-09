// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRTSPlayerController.h"
#include "EnhancedInputSubsystems.h"

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
}
