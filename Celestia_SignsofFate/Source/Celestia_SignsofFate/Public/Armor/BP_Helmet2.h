// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "BP_Helmet2.generated.h"
class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class CELESTIA_SIGNSOFFATE_API ABP_Helmet2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Helmet2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UBoxComponent> BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> CubeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CoinsAmount = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageCharacter = 10.0f;
	

};
