// Fill out your copyright notice in the Description page of Project Settings.

#include "BlankUECPP.h"
#include "CoolObject.h"


// Sets default values
ACoolObject::ACoolObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACoolObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoolObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

