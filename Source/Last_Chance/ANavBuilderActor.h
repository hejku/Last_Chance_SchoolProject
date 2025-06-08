// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ANavBuilderActor.generated.h"

UCLASS()
class LAST_CHANCE_API AANavBuilderActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AANavBuilderActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};