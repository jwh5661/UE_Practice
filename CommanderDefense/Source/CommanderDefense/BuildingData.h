// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" // 데이터 테이블을 쓰기 위한 필수 헤더
#include "BuildingData.generated.h"

// 블루프린트에서도 이 데이터를 읽을 수 있게 해주는 매크로
USTRUCT(BlueprintType)
struct FBuildingData : public FTableRowBase
{
	GENERATED_BODY()

public:
	// 1. 건물 이름
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Info")
	FText BuildingName;

	// 2. 건물 건설 비용 ( 경영 시뮬레이션 재화 )
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Info")
	int32 ConstructionCost;

	// 3. 스폰할 건물의 실제 액터 클래스 ( 블루프린트를 연결할 빈칸 )
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Info")
	TSubclassOf<class AActor> BuildingClass;
};