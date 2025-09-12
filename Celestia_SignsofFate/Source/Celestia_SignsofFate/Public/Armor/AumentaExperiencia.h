// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AumentaExperiencia.generated.h"


class UBoxComponent;
class UStaticMeshComponent;

UCLASS()


class CELESTIA_SIGNSOFFATE_API AAumentaExperiencia : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAumentaExperiencia();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBoxComponent> BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> CubeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExpAdquirida = 200.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
