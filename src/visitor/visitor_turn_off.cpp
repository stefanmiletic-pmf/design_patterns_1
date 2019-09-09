#include "visitor/visitor_turn_off.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"

bool visitor_turn_off::operation(plane_vehicle& v, double amount) {
	return v.off();
}
bool visitor_turn_off::operation(car_vehicle& v, double amount)  {
	return v.off();
}





