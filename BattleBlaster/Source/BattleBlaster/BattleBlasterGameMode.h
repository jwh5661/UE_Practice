// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "BattleBlasterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEBLASTER_API ABattleBlasterGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	void ActorDied(AActor* DeadActor);

	void OnGameOverTimerTimeout();

	void OnCountdownTimerTimeout();

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UScreenMessage> ScreenMessageClass;

	UScreenMessage* ScreenMessageWidget;

	UPROPERTY(EditAnywhere)
	float GameOverDelay = 3.0f;

	UPROPERTY(EditAnywhere)
	int32 CountdownDelay = 3;

	int32 CountdownSeconds;

	FTimerHandle CountdownTimerHandle;

	class ATank* Tank;

	int32 TowerCount;

	bool IsVictory = false;
};
