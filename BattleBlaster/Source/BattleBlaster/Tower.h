// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API ATower : public ABasePawn
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void CheckFireCondition();

	bool IsInFireRange();

	void HandleDestruction();

public:
	UPROPERTY(EditAnywhere)
	float FireRange	= 300.0f;

	UPROPERTY(EditAnywhere)
	float FireRate = 2.0f;

	class ATank* Tank;
};
