// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsActor.h"

// Sets default values
APhysicsActor::APhysicsActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhysicsActor::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void APhysicsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector currentLocation = GetActorLocation();
	currentLocation += velocity * DeltaTime;
	SetActorLocation(currentLocation);
	/*if (USceneComponent* rootComponent = GetRootComponent()) {
		if (APawn* playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)) {
			FRotator lookAt = UKismetMathLibrary::FindLookAtRotation(
				rootComponent->GetComponentLocation(), playerPawn->GetActorLocation());
			rootComponent->SetWorldRotation(lookAt);
		}
	}*/
}

