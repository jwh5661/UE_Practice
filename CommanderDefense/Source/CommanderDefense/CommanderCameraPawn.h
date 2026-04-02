// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CommanderCameraPawn.generated.h"

UCLASS()
class COMMANDERDEFENSE_API ACommanderCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACommanderCameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	// 지휘관의 눈을 지탱할 셀카봉
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArm;

	// 실제 전장을 비출 카메라 렌즈
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float ZoomSpeed = 200.0f;

	// 제일 가깝게 확대할 때의 셀카봉 길이
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float MinZoom = 500.0f;

	// 제일 멀리 축소할 때의 셀카봉 길이
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float MaxZoom = 4000.0f; 

	// 화면 가장자리 몇 픽셀부터 반응할 것인가? ( 여백 )
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float EdgeScrollZone = 30.0f;

	// 엣지 스크롤 속도
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float EdgeScrollSpeed = 1500.0f;

	// 드래그 속도
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float PanSpeed = 100.0f;

	// 현재 드래그 중인지 상태 저장
	bool bIsPanning = false;

	// 직전 프레임의 마우스 위치 저장
	FVector2D LastMousePosition;

	FVector2D RightClickDownPosition;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
