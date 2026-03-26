#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELocalizationCulture.h"
#include "Localization.generated.h"

UCLASS(Blueprintable)
class FNAF9_API ULocalization : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalization();
private:
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ELocalizationCulture> GetLocalizationCultureFromSteam();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ELocalizationCulture> GetLocalizationCulture();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeLocalizationCulture(TEnumAsByte<ELocalizationCulture> Culture);
    
};

