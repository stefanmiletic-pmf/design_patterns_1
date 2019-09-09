#include "visitor/visitor_fuel_up.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"

bool visitor_fuel_up::operation(plane_vehicle& v, double amount) {
	return v.fuel_up(amount);
}
bool visitor_fuel_up::operation(car_vehicle& v, double amount)  {
	return v.fuel_up(amount);
}









