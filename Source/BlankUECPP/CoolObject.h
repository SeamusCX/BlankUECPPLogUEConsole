// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CoolObject.generated.h"

UCLASS()
class BLANKUECPP_API ACoolObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoolObject();

	UPROPERTY(VisibleAnyWhere, Category = Player)
		FLinearColor Color;
	UPROPERTY(EditAnywhere, Category = Player)
		class UTexture *Texture;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Player)
		int32 PlayerNumber=10;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
		float Health=20.0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
