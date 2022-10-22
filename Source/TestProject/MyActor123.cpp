// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor123.h"

// Sets default values
AMyActor123::AMyActor123()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor123::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor123::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

