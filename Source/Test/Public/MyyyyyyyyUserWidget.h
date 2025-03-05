// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyyyyyyyyUserWidget.generated.h"

UCLASS()
class TEST_API UMyyyyyyyyUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UImage* _Crosshair;

public:
	void SetCrosshairColor(bool IsColliding);
};
