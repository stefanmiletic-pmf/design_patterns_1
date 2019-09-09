#pragma once
#include "constants/COLORS.h"
#include "vehicles/vehicle.h"

#include <string>

//class vehicle;

class abstract_vehicles_factory {

public:
    virtual vehicle* create_car(std::string, color_type, double,double, double, double) = 0;
    virtual vehicle* create_plane(std::string, color_type, double,double, double, double) = 0;

public:
    virtual ~abstract_vehicles_factory() {}
	
};
