#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomItemGroup.generated.h"

UCLASS(Abstract, Blueprintable)
class RANDOMITEMSYSTEM_API ARandomItemGroup : public AActor {
    GENERATED_BODY()
public:
    ARandomItemGroup();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetNumLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetItemDisplayInformation() const;
    
};

