// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CoolObject.generated.h"

UENUM(BluePrintType)
enum EStatus
{

	sayhello				UMETA(DisplayName = "Say Hello"),
	createobject			UMETA(DisplayName = "Create a UserProfile"),
	printstatus			UMETA(DisplayName = "Print Ustruct Status"),
};

USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_USTRUCT_BODY()
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=PlayerInfo)
		int32 PlayerNumeber;
	    UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FColor PlayerColor;


};







UCLASS()
class BLANKUECPP_API ACoolObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoolObject();

	UPROPERTY(VisibleAnyWhere, Category = Player)
		FLinearColor Color;
	UPROPERTY(EditAnywhere, Category = Player)
		class UTexture *Texture;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Player)
		int32 PlayerNumber=10;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
		float Health=20.0;
	UPROPERTY(EditAnywhere, Category = Profile)
		TSubclassOf<class UUserProfile> UserProfileClass;
	UPROPERTY()
		class UUserProfile *UserProfile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSelection)
		TEnumAsByte<EStatus>    CurrentStatus;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
		FPlayerInfo PlayerInfo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable,Category="UserProfile")
	void CreateUserProfile();
	UFUNCTION(BlueprintCallable, Category = "UserProfile")
	void DeleteUsetProfile();
	UFUNCTION(BlueprintCallable, Category = "Cool|CoolFunction")
		void SayHelloToUnreal();
    

};
