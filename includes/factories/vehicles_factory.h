#pragma once

#include "vehicles/vehicle.h"
//class vehicle;

class vehicles_factory {


public:
    vehicle* create_car(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume);
					
    vehicle* create_plane(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume);
};
