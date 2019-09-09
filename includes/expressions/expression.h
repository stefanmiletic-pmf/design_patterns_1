#pragma once
#include "vehicles/vehicle.h"

class expression {

public:
    virtual bool interpret(vehicle*) = 0;

public:
    virtual ~expression() {}

};

