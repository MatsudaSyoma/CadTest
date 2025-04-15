// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPP_MoveSplineComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MECHSIM_API UCPP_MoveSplineComponent : public UActorComponent
{
	GENERATED_BODY()

public:

UPROPERTY(EditAnywhere, Category = "Edit")

TSubclassOf<ASplineActor> SplineActor;
UPROPERTY(EditAnywhere, Category = "Edit")
float Speed = 5.0f;

float Distance = 0.0f;

public:	
	// Sets default values for this component's properties
	UCPP_MoveSplineComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
