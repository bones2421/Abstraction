// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"
#include "DoorInteractionComponent.h"


AInteractableDoor::AInteractableDoor()
{
	DoorInteractionComponent = CreateAbstractDefaultSubobject<UDoorInteractionComponent>(TEXT("DoorInteractionComponent"));
}

