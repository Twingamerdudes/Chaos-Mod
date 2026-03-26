#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioUtil.generated.h"

class AActor;
class UAkComponent;
class UObject;

UCLASS(Blueprintable)
class FNAF9_API UAudioUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioUtil();
private:
    UFUNCTION(BlueprintCallable)
    static void RemoveWwiseListener(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAudioForActorPlaying(const UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void AddWwiseListener(AActor* Actor);
    
};

