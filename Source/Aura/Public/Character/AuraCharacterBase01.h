// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase01.generated.h"

UCLASS()
class AURA_API AAuraCharacterBase01 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAuraCharacterBase01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
};
