#include "visitor/visitor_turn_to.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"
bool visitor_turn_to::operation(plane_vehicle& v, double amount) {
	return v.turn_to(amount);
}
bool visitor_turn_to::operation(car_vehicle& v, double amount)  {
	return v.turn_to(amount);
}






