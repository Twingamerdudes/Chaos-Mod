#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UWorldStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnStateChange;
    
    UWorldStateComponent();
    UFUNCTION(BlueprintCallable)
    void SetObjectState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidSaveName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetObjectState() const;
    
};

