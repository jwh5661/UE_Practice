// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyRTSCharacter.generated.h"

UENUM(BlueprintType)
enum class ERTSUnitState : uint8
{
	Idle	UMETA(DisplayName = "대기"),
	Move	UMETA(DisplayName = "이동"),
	Chase	UMETA(DisplayName = "추적"),
	Attack	UMETA(DisplayName = "공격"),
	Dead	UMETA(DisplayName = "사망")
};

UCLASS()
class COMMANDERDEFENSE_API AMyRTSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyRTSCharacter();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "RTS")
	void SetSelected(bool bSelected);

	// 외부에서 상태를 변경할 때 부르는 함수
	void SetUnitState(ERTSUnitState NewState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 매 프레임마다 현재 상태에 맞기 실행될 내부 로직들
	void UpdateIdle();
	void UpdateMove();
	// Chase, Attack, Dead 등도 나중에 추가 예정

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RTS|State")
	ERTSUnitState CurrentState = ERTSUnitState::Idle;
};
