// Fill out your copyright notice in the Description page of Project Settings.


#include "Armor/BP_Cura.h"
#include "Components/BoxComponent.h"
#include "Components/HealthComponent.h"


// Sets default values
ABP_Cura::ABP_Cura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CubeCollision"));
	RootComponent = BoxCollision;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	CubeMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ABP_Cura::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Cura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABP_Cura::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if (UHealthComponent* Cura = OtherActor->FindComponentByClass<UHealthComponent>())
	{
		Cura->CuraDanio(CuraCharacter);
	}
}

