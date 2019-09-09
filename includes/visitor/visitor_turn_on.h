#pragma once

#include "visitor/visitor.h"

class visitor_turn_on: public visitor {

public:
    bool operation(plane_vehicle& v, double amount);
    bool operation(car_vehicle& v, double amount);
};



