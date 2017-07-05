// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "LogGameMode.generated.h"

/**
 * 
 */
//�Զ���һ��LogCoolGameMode����־����
//������һ��������������cpp��
//�������������ElogVerbosityö�٣������������һ����all

DECLARE_LOG_CATEGORY_EXTERN(LogCoolGameModee,Log,All);


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
	//����Ļ���
	void OutPutScreen();
	//�Զ�����־�������
	void OutPutCustomLog();
	//��ʼ��MessageLog���� InitMessageType
	void InitMessageLogType(FName loggerName);
    //��MessageLog���
	void OutPutMessageLog();
};
