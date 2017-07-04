// Fill out your copyright notice in the Description page of Project Settings.

#include "BlankUECPP.h"
#include "LogGameMode.h"

ALogGameMode::ALogGameMode()
{

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

