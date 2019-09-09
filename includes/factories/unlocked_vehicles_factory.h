#pragma once

#include "factories/abstract_vehicles_factory.h"
#include "proxy/proxy_unlocked_vehicle.h"



class unlocked_vehicles_factory: public abstract_vehicles_factory {


public:
    proxy_unlocked_vehicle* create_car(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume);
					
    proxy_unlocked_vehicle* create_plane(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume);

};
