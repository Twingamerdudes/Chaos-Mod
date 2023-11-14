#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PatrollerInterface.generated.h"

class IPathPointProvider;
class UPathPointProvider;

UINTERFACE(Blueprintable)
class UPatrollerInterface : public UInterface {
    GENERATED_BODY()
};

class IPatrollerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPatrolPath(const TScriptInterface<IPathPointProvider>& PatrolPath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentPatrolPointIndex(int32 PatrolPointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IPathPointProvider> GetPatrolPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentPatrolPointIndex() const;
    
};

