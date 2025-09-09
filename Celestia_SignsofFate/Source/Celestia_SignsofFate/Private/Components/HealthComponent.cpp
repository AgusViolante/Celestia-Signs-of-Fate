// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealthComponent.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

bool UHealthComponent::heal(float amount)
{
	if (health >= MaxLife)
		return false;

	health = FMath::Clamp(health + amount, 0.0f, MaxLife);
	return true;
}

void UHealthComponent::ReciveDanio(float danio)
{
	if (health <= 0) { 
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Black,FString("Ya moriste"));
		}
		return;
	}

	health -= danio;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Black,FString::SanitizeFloat(health) + "Danios Recibidos" 
		);
	}
}

void UHealthComponent::CuraDanio(float cura)
{

	if (health >= 100)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Green,FString("Ya te curaste al maximo"));
		}
		return;
	}
	health += cura;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Green,FString::SanitizeFloat(health) + "Danios Curados"
		);
	}
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

