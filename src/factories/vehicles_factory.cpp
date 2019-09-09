#pragma once

#include "factories/vehicles_factory.h"

#include "vehicles/car_vehicle.h"
#include "vehicles/plane_vehicle.h"

vehicle* vehicles_factory::create_car(std::string name,
				color_type color,
				double size,
				double fuel_capacity,
				double direction,
				double fuel_consume) {

				
							return new car_vehicle(
							
								name, color, size,
								fuel_capacity, direction, 
								fuel_consume
								
							);



				}
					
vehicle* vehicles_factory::create_plane(std::string name,
				color_type color,
				double size,
				double fuel_capacity,
				double direction,
				double fuel_consume) {

							return new plane_vehicle(
							
								name, color, size,
								fuel_capacity, direction, 
								fuel_consume
								
							);
				   
				   
				}

