// Fill out your copyright notice in the Description page of Project Settings.


#include "MyyyyyyyGameModeBase.h"
#include "MyyyyyyyyUserWidget.h"

AMyyyyyyyGameModeBase::AMyyyyyyyGameModeBase()
{
	
}

void AMyyyyyyyGameModeBase::StartPlay()
{
	Super::StartPlay();

    if (CrosshairWidgetClass)
    {
        CrossHairWidget = CreateWidget<UMyyyyyyyyUserWidget>(GetWorld(), CrosshairWidgetClass);

        if (CrossHairWidget)
        {
            CrossHairWidget->AddToViewport();
        }
    }
}

void AMyyyyyyyGameModeBase::ChangeColor(bool IsColiding)
{
    CrossHairWidget->SetCrosshairColor(IsColiding);
}