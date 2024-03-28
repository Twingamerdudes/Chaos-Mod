#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ForcedGCSubsystem.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UForcedGCSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceGCRequests;
    
    UForcedGCSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceGCInProgrcess() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceGC();
    
};

