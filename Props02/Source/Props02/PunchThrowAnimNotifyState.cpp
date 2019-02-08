// Fill out your copyright notice in the Description page of Project Settings.

#include "PunchThrowAnimNotifyState.h"

#include "Props02Character.h"

#include "Engine.h"

void UPunchThrowAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	//GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Yellow, __FUNCTION__);

	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AProps02Character* Player = Cast<AProps02Character>(MeshComp->GetOwner());
		if (Player != NULL && !Player->PunchThrowAudioComponent->IsPlaying())
		{
			Player->PunchThrowAudioComponent->Play(0.f);
		}
	}
}

void UPunchThrowAnimNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	//GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Yellow, __FUNCTION__);
}

void UPunchThrowAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	//GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Yellow, __FUNCTION__);
}