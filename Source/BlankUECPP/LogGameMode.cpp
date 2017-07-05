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

	UE_LOG(LogTemp, Display, TEXT("先来点东西输出！"));

	UE_LOG(LogTemp, Warning, TEXT("再来点黄黄的东东！"));

	UE_LOG(LogTemp, Error, TEXT("来点红色的！！"));

	//UE_LOG(LogTemp, Fatal, TEXT("这里是超级严重的错误，走到这引擎崩！"));

	OutputLog();

	OutputConsole();
	OutPutScreen();
	OutPutCustomLog();
	OutPutMessageLog();
}

void ALogGameMode::OutputLog()
{
	UE_LOG(LogTemp, Warning, TEXT("int输出 %d"), 123);

	UE_LOG(LogTemp, Warning, TEXT("字符输出 %s"), TEXT("GoGo"));

	UE_LOG(LogTemp, Warning, TEXT("浮点输出 %f"), 3.14155926535f);

	FVector vec(1, 2, 3);
	UE_LOG(LogTemp, Warning, TEXT("向量输出  %s"), *vec.ToString());
}

void ALogGameMode::OutputConsole()
{
	GetWorld()->GetFirstPlayerController()->ClientMessage(TEXT("Console 中文!"));
}


void ALogGameMode::OutPutScreen()
{
	GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Red,TEXT("向屏幕输出信息10！"));
	GEngine->AddOnScreenDebugMessage(-1,12.0f,FColor::Green, TEXT("向屏幕输出信息12！"));

}

void ALogGameMode::OutPutCustomLog()
{
	UE_LOG(LogCoolGameModee,Warning,TEXT("自己的日志类型a"));
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
	FMessageLog(LoggerName).Error(FTEXT("啊哦，一个严重的错误！！"));
	FMessageLog(LoggerName).Warning(FTEXT("一个警告信息！！"));

}









#undef LOCTEXT_NAMESPACE 