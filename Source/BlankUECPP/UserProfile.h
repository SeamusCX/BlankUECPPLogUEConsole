// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * 
 */
class FDataStorage
{

public:
	FDataStorage()
	{
		RawData = new int32[3]{ 1,2,3 };
	}
	~FDataStorage()
	{
		if (RawData)
		{
			delete[] RawData;
		}
	}
private:
	
	int32 *RawData;

};





UCLASS( Blueprintable )
class BLANKUECPP_API UUserProfile : public UObject
{
	GENERATED_BODY()
		UUserProfile();
	
public:
	virtual void BeginDestroy() override;

	//����һ���������ֵ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserData)
		float HpMax;
	//����һ������ֵ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UserData)
		float Armor;
	//����һ����ҵ���ɫ���ɼ����ǲ��ܸģ���ͼ���޷�Get��Set��Ĭ���۵�����ʾ��
	UPROPERTY(VisibleAnywhere, AdvancedDisplay, Category = Userdata)
		FColor PlayerColor;
	

private:
	FDataStorage *DataStorage;


};
