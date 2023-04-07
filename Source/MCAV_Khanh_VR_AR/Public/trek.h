// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "trek.generated.h"

UCLASS()
class MCAV_KHANH_VR_AR_API Atrek : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atrek();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
