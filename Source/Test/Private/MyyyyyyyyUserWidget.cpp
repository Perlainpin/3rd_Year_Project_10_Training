// Fill out your copyright notice in the Description page of Project Settings.


#include "MyyyyyyyyUserWidget.h"
#include "Components/Image.h"

void UMyyyyyyyyUserWidget::SetCrosshairColor(bool IsColliding)
{
	if (IsColliding)
	{
		_Crosshair->SetColorAndOpacity(FLinearColor::Green);
	}
	else
	{
		_Crosshair->SetColorAndOpacity(FLinearColor::Red);
	}
}