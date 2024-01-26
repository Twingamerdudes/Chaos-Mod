#include "EnvQueryTest_ObjectSweep.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ObjectSweep::UEnvQueryTest_ObjectSweep() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->SphereRadius = 5.00f;
}

