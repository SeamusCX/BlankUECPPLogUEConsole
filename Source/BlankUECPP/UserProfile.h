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

	//定义一个最大生命值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserData)
		float HpMax;
	//定义一个护照值
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UserData)
		float Armor;
	//定义一个玩家的颜色，可见但是不能改，蓝图里无法Get、Set，默认折叠不显示的
	UPROPERTY(VisibleAnywhere, AdvancedDisplay, Category = Userdata)
		FColor PlayerColor;
	

private:
	FDataStorage *DataStorage;


};
