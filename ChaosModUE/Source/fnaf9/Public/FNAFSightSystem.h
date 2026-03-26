#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FNAFSightSystem.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFSightSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UFNAFSightSystem();
    UFUNCTION(BlueprintCallable, Exec)
    void SetSightSystemDisplay(bool bEnable);
    
};

