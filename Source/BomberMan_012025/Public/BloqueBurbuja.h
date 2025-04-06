// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueBurbuja.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueBurbuja : public ABloque
{
	GENERATED_BODY()
public:
	// Constructor
	ABloqueBurbuja();
protected:
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime);
	// Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	bool bPuedeMoverse = true; // Controla si el actor se puede mover

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float FloatSpeed = 20.0f; // Velocidad del movimiento

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float MinZ = 100.0f; // Altura mínima permitida

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float MaxZ = 500.0f; // Altura máxima permitida
};
