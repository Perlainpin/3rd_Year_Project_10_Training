// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyyyyyyyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API AMyyyyyyyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMyyyyyyyGameModeBase();
	virtual ~AMyyyyyyyGameModeBase() = default;

	virtual void StartPlay();

	void ChangeColor(bool IsColiding);

protected:
	//Classe du Widget (modifiable dans l’éditeur)
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UMyyyyyyyyUserWidget> CrosshairWidgetClass;

private:
	UPROPERTY()
	UMyyyyyyyyUserWidget* CrossHairWidget;
};
