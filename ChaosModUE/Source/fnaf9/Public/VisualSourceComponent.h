#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnSourceDetectedDelegate.h"
#include "VisualSourceComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UVisualSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSourceDetected OnSourceDetected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VisualOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibilityEnabled;
    
public:
    UVisualSourceComponent();
    UFUNCTION(BlueprintCallable)
    void SetVisualOffsetLocations(const TArray<FVector>& InVisualOffsets);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualOffset(int32 PointIndex, FVector visualOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceVisibility(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisualOffset(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetVisualOffsets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetVisualLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSourceVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDetectedVisualLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void DetectTheSource(const FVector VSLocation, AActor* passed_HitActor, bool passed_bVisible);
    
};

