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

	//使用UE_LOG输出
	void OutputLog();

	//使用Console输出
	void OutputConsole();
};
