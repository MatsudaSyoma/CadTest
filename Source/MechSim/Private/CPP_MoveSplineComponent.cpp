// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MoveSplineComponent.h"

// Sets default values for this component's properties
UCPP_MoveSplineComponent::UCPP_MoveSplineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCPP_MoveSplineComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
	static ConstructorHelpers::FClassFinder<AActor> BPActorClass(TEXT("/Game/CADData/No000740_ASSY/BluePrint/BP_Spline"));
}


// Called every frame
void UCPP_MoveSplineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

