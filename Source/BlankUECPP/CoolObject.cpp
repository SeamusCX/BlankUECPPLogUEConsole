// Fill out your copyright notice in the Description page of Project Settings.

#include "BlankUECPP.h"
#include "CoolObject.h"
#include "UserProfile.h"

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

void ACoolObject::CreateUserProfile()
{
	if (!UserProfile)
	{
		UserProfile = NewObject<UUserProfile>(GetTransientPackage(), UserProfileClass);
	}
	GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Red,FString::Printf(TEXT("BP_UserProfile Address=%p\n Armor=%f HpMax=%f"),UserProfile, UserProfile->Armor, UserProfile->HpMax));
}

void ACoolObject::DeleteUsetProfile()
{
	if (UserProfile)
	{
		UserProfile->ConditionalBeginDestroy();
		UserProfile = nullptr;
		GEngine->AddOnScreenDebugMessage(-1, 10.5f, FColor::Green, TEXT("Delete UseProfile!!£¡"));
	}
}

void ACoolObject::SayHelloToUnreal()
{
	GEngine->AddOnScreenDebugMessage(-1,10.5f,FColor::Green,TEXT("Hello Unreal!!!"));


}

