#include "factories/unlocked_vehicles_factory.h"

#include "proxy/proxy_unlocked_plane.h"
#include "proxy/proxy_unlocked_car.h"

#include "factories/vehicles_factory.h"



proxy_unlocked_vehicle* unlocked_vehicles_factory::create_car(std::string name,
				color_type color,
				double size,
				double fuel_capacity,
				double direction,
				double fuel_consume) {

				vehicles_factory v_f;
				return new proxy_unlocked_car(
				
				
							v_f.create_car(
							
								name, color, size,
								fuel_capacity, direction, 
								fuel_consume
								
							)
				   );



				}
					
proxy_unlocked_vehicle* unlocked_vehicles_factory::create_plane(std::string name,
				color_type color,
				double size,
				double fuel_capacity,
				double direction,
				double fuel_consume) {

				vehicles_factory v_f;
				return new proxy_unlocked_plane(
				
				
							v_f.create_plane(
							
								name, color, size,
								fuel_capacity, direction, 
								fuel_consume
								
							)
				   );
				   
				   
				}

