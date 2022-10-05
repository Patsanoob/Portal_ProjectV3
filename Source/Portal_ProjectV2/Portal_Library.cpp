// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal_Library.h"
#include "Engine/TextureRenderTarget2D.h"

void UPortal_Library::ResizeRenderTarget(UTextureRenderTarget2D* render_target, float size_x, float size_y)
{
	if (render_target == nullptr)
		return;
	render_target->ResizeTarget(size_x, size_y);
}
