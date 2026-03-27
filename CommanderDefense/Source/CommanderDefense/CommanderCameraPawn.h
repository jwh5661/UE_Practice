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
	// ÁöÈÖ°üÀÇ ´«À» ÁöÅÊÇÒ ¼¿Ä«ºÀ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArm;

	// ½ÇÁ¦ ÀüÀåÀ» ºñÃâ Ä«¸Þ¶ó ·»Áî
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* CameraComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
