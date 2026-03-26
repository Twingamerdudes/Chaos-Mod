#pragma once
#include "CoreMinimal.h"
#include "EDDGIRaysPerProbe.generated.h"

UENUM()
enum class EDDGIRaysPerProbe : int32 {
    n144 = 0x90,
    n288 = 0x120,
    n432 = 0x1B0,
    n576 = 0x240,
    n720 = 0x2D0,
    n864 = 0x360,
    n1008 = 0x3F0,
};

