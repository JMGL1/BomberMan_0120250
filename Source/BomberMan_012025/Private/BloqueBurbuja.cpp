// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"

ABloqueBurbuja::ABloqueBurbuja()
{
	if (MallaBloque)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Burbuja.Burbuja'"));
		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}

}
void ABloqueBurbuja::BeginPlay()
{
	Super::BeginPlay();
	// Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego
}
void ABloqueBurbuja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Aquí puedes agregar cualquier lógica adicional que necesites en cada tick
	// Por ejemplo, puedes mover el bloque o aplicar efectos visuales
	if (bPuedeMoverse)
	{
		FVector NuevaPosicion = GetActorLocation();
		float DeltaHeight = FMath::FRandRange(-2.0f, 2.0f) * FloatSpeed * DeltaTime; // Multiplicado por DeltaTime para movimiento suave
		NuevaPosicion.Z = FMath::Clamp(NuevaPosicion.Z + DeltaHeight, MinZ, MaxZ); // Limitar el rango Z
		SetActorLocation(NuevaPosicion);
	}
}