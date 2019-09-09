#pragma once
#include "constants/COLORS.h"
// #include "vehicles/car_vehicle.h"
// #include "vehicles/plane_vehicle.h"


#include <iostream>

class car_vehicle;
class plane_vehicle;

class visitor {

public:
    virtual bool operation(car_vehicle&, double) = 0;
    virtual bool operation(plane_vehicle&, double) = 0;



};
