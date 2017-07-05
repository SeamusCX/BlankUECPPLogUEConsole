// Fill out your copyright notice in the Description page of Project Settings.

#include "BlankUECPP.h"
#include "LogGameMode.h"
#include "Developer/MessageLog/Public/MessageLogModule.h"



#define LOCTEXT_NAMESPACE "DAWA_CoolGameLog"

DEFINE_LOG_CATEGORY(LogCoolGameModee);


#define FTEXT(x) LOCTEXT(x,x)

FName LoggerName("DAWA_CoolGameMode");


ALogGameMode::ALogGameMode()
{
	InitMessageLogType(LoggerName);
	OutPutMessageLog();
	FMessageLog(LoggerName).Warning(FTEXT("A warining message from GameMode Actor"));
}

void ALogGameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("�����㶫�������"));

	UE_LOG(LogTemp, Warning, TEXT("������ƻƵĶ�����"));

	UE_LOG(LogTemp, Error, TEXT("�����ɫ�ģ���"));

	//UE_LOG(LogTemp, Fatal, TEXT("�����ǳ������صĴ����ߵ����������"));

	OutputLog();

	OutputConsole();
	OutPutScreen();
	OutPutCustomLog();
	OutPutMessageLog();
}

void ALogGameMode::OutputLog()
{
	UE_LOG(LogTemp, Warning, TEXT("int��� %d"), 123);

	UE_LOG(LogTemp, Warning, TEXT("�ַ���� %s"), TEXT("GoGo"));

	UE_LOG(LogTemp, Warning, TEXT("������� %f"), 3.14155926535f);

	FVector vec(1, 2, 3);
	UE_LOG(LogTemp, Warning, TEXT("�������  %s"), *vec.ToString());
}

void ALogGameMode::OutputConsole()
{
	GetWorld()->GetFirstPlayerController()->ClientMessage(TEXT("Console ����!"));
}


void ALogGameMode::OutPutScreen()
{
	GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Red,TEXT("����Ļ�����Ϣ10��"));
	GEngine->AddOnScreenDebugMessage(-1,12.0f,FColor::Green, TEXT("����Ļ�����Ϣ12��"));

}

void ALogGameMode::OutPutCustomLog()
{
	UE_LOG(LogCoolGameModee,Warning,TEXT("�Լ�����־����a"));
}

void ALogGameMode::InitMessageLogType(FName loggerName)
{
	FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
        

	FMessageLogInitializationOptions   InitOptions;
	InitOptions.bShowPages=true;
	InitOptions.bShowFilters = true;
	FText LogListingName = FTEXT("CoolGame's Log Listing");
	MessageLogModule.RegisterLogListing(LoggerName , LogListingName, InitOptions);




}

void ALogGameMode::OutPutMessageLog()
{
	FMessageLog(LoggerName).Error(FTEXT("��Ŷ��һ�����صĴ��󣡣�"));
	FMessageLog(LoggerName).Warning(FTEXT("һ��������Ϣ����"));

}









#undef LOCTEXT_NAMESPACE 