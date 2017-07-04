// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "LogGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BLANKUECPP_API ALogGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ALogGameMode();

protected:

	virtual void BeginPlay() override;

	//ʹ��UE_LOG���
	void OutputLog();

	//ʹ��Console���
	void OutputConsole();
};
