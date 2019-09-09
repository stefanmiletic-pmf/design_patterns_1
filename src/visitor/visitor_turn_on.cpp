#include "visitor/visitor_turn_on.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"
bool visitor_turn_on::operation(plane_vehicle& v, double amount) {
	return v.on();
}
bool visitor_turn_on::operation(car_vehicle& v, double amount)  {
	return v.on();
}




