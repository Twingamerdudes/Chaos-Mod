#pragma once
#include "CoreMinimal.h"
#include "FNAFItemCollectInfo.generated.h"

USTRUCT(BlueprintType)
struct FFNAFItemCollectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasViewed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CollectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayIteration;
    
    FNAF9_API FFNAFItemCollectInfo();
};

