// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "LogGameMode.generated.h"

/**
 * 
 */
//自定义一个LogCoolGameMode的日志类型
//这里是一个声明，定义在cpp中
//后面的两个参数ElogVerbosity枚举，代表输出级别，一般是all

DECLARE_LOG_CATEGORY_EXTERN(LogCoolGameModee,Log,All);


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
	//向屏幕输出
	void OutPutScreen();
	//自定义日志类型输出
	void OutPutCustomLog();
	//初始化MessageLog类型 InitMessageType
	void InitMessageLogType(FName loggerName);
    //想MessageLog输出
	void OutPutMessageLog();
};
