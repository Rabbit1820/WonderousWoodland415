// Fill out your copyright notice in the Description page of Project Settings.


#include "ProcPlain.h"
#include "ProceduralMeshComponent.h"

// Sets default values
AProcPlain::AProcPlain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	procMesh = CreateDefaultSubobject<UProceduralMeshComponent>("Proc Mesh");


}

// Called when the game starts or when spawned
void AProcPlain::BeginPlay()
{
	Super::BeginPlay();
	
	
}

void AProcPlain::PostActorCreated()
{
	Super::PostActorCreated();
	CreateMesh();
	if (PlaneMat)
	{
		procMesh->SetMaterial(0, PlaneMat);
	}
}

void AProcPlain::PostLoad()
{
	Super::PostLoad();
	CreateMesh();
	if (PlaneMat)
	{
		procMesh->SetMaterial(0, PlaneMat);
	}
}

// Called every frame
void AProcPlain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProcPlain::CreateMesh()
{
	procMesh->CreateMeshSection(0, Vertices, Triangles, TArray<FVector>(), UV0, TArray<FColor>(), TArray<FProcMeshTangent>(), true);
}

