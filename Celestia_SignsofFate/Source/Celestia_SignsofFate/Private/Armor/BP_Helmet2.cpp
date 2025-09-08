// Fill out your copyright notice in the Description page of Project Settings.


#include "Armor/BP_Helmet2.h"
#include "Components/BoxComponent.h"
#include "Components/HealthComponent.h"
#include "interfaces/I_Equipar.h"

// Sets default values
ABP_Helmet2::ABP_Helmet2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CubeCollision"));
		RootComponent = BoxCollision;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	CubeMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABP_Helmet2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Helmet2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABP_Helmet2::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor->Implements<UI_Equipar>())
	{
		II_Equipar::Execute_AddHelmet(OtherActor,CoinsAmount);
	}
	if (UHealthComponent* Salud = OtherActor->FindComponentByClass<UHealthComponent>())
	{
		Salud->ReciveDanio(DamageCharacter);
	}
	if (UHealthComponent* Cura = OtherActor->FindComponentByClass<UHealthComponent>())
	{
		Cura->CuraDanio(CuraCharacter);
	}
};

