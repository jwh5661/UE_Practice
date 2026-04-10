// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyRTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COMMANDERDEFENSE_API AMyRTSPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

protected:

public:
	void OnLeftClick();

public:
	UPROPERTY(EditAnywhere, Category = "Commander Setting")
	class UInputMappingContext* IMC_Commander;

	UPROPERTY(EditAnywhere, Category = "Commander Setting")
	class UInputAction* IA_LeftClick;

	UPROPERTY(EditAnywhere, Category = "Building")
	class UDataTable* BuildingDataTable;
	
};
