#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelStreamViewpointProvider.generated.h"

class ULevelStreamViewpoint;

UINTERFACE(Blueprintable)
class ULevelStreamViewpointProvider : public UInterface {
    GENERATED_BODY()
};

class ILevelStreamViewpointProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULevelStreamViewpoint* GetLevelStreamViewpoint();
    
};

