// Fill out your copyright notice in the Description page of Project Settings.


#include "Armor/AumentaExperiencia.h"
#include "Components/BoxComponent.h"
#include "Components/ExpComponent.h"

// Sets default values
AAumentaExperiencia::AAumentaExperiencia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CubeCollision"));
	RootComponent = BoxCollision;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	CubeMesh->SetupAttachment(RootComponent);

}

void AAumentaExperiencia::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if (UExpComponent* RecibeExp = OtherActor->FindComponentByClass<UExpComponent>())
	{
		RecibeExp->RecibeExp(ExpAdquirida);
	}
}

// Called when the game starts or when spawned
void AAumentaExperiencia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAumentaExperiencia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

