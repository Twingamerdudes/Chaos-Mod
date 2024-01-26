#pragma once
#include "CoreMinimal.h"
#include "ItemRandomizer.h"
#include "SurvivalItemRandomizer.generated.h"

class AActor;
class ASurvivalItemPackage;
class UMaterialInterface;

UCLASS(Blueprintable)
class FNAF9_API ASurvivalItemRandomizer : public AItemRandomizer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASurvivalItemPackage*> RemainingPackages;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASurvivalItemPackage> SurvivalPackageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> GlitchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> GlitchManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GlitchMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusForGlitchInteract;
    
public:
    ASurvivalItemRandomizer();
    UFUNCTION(BlueprintCallable)
    void RandomizeSurvivalItems(bool bSpawnAllLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCollected(const ASurvivalItemPackage* Package) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASurvivalItemPackage*> GetPackagesSortedByDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetGlitchMaterial() const;
    
};

