// Fill out your copyright notice in the Description page of Project Settings.

#include "BlankUECPP.h"
#include "LogGameMode.h"

ALogGameMode::ALogGameMode()
{

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

