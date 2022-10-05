// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Portal_Library.generated.h"

/**
 * 
 */
UCLASS()
class PORTAL_PROJECTV2_API UPortal_Library : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public: 
	UFUNCTION(BlueprintCallable, Category = "PortalFunctionLibrary")
	static void ResizeRenderTarget(UTextureRenderTarget2D* render_target, float size_x, float size_y);
};
