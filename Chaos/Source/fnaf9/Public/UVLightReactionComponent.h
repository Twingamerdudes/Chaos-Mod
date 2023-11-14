#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UVLightReactionComponent.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UUVLightReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideUVLightPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideUVLightPrecisionValue;
    
public:
    UUVLightReactionComponent();
    UFUNCTION(BlueprintCallable)
    void Setup(UMaterialInstanceDynamic* InMaterial, TArray<USceneComponent*> InLocatorComponents);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActor(AActor* ActorToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEmitterInRange() const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateUV();
    
    UFUNCTION(BlueprintCallable)
    void AddActor(AActor* ActorToAdd);
    
};

