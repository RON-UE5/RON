// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Equipable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEquipable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class READYORNOT_API IEquipable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Equip() = 0;
	virtual void Unequip() = 0;
};
