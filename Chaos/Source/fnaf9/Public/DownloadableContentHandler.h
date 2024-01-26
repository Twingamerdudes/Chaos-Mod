#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DownloadableContentHandler.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UDownloadableContentHandler : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDownloadableContentHandler();
    UFUNCTION(BlueprintCallable)
    static bool HasMountedDLCPack();
    
    UFUNCTION(BlueprintCallable)
    static bool HasDLC();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetDLCPurchases();
    
};

