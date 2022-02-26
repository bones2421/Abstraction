// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractionSuccess);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ABSTRACTION_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionComponent();

	//broadcasted from children, children know when interaction finished
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnInteractionSuccess InteractionSuccess;

	UFUNCTION()
		virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBox, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBox);

	UCapsuleComponent* GetTriggerCapsule() const { return TriggerCapsule; }
protected:
	// Called when game starts
	virtual void BeginPlay() override;
	virtual void TickComponent(float DetlaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		virtual void InteractionStart();

	UPROPERTY(EditAnywhere)
		FText InteractionPrompt;

	UPROPERTY(EditAnywhere, NoClear)
		UCapsuleComponent* TriggerCapsule = nullptr;

	AActor* InteractingActor = nullptr;
};
