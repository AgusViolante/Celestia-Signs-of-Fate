// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Armor/BP_Helmet2.h"
#include "UObject/Interface.h"
#include "I_Equipar.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UI_Equipar : public UInterface
{
	GENERATED_BODY()
};

class CELESTIA_SIGNSOFFATE_API II_Equipar
{
	GENERATED_BODY()

	
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Player")
	//void AddHelmet(ABP_Helmet2* Helmet);
	void AddHelmet(int Coins);

	void ReciveDamage(float damage);
};
