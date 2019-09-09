#include "visitor/visitor_accel.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"

bool visitor_accel::operation(plane_vehicle& v, double amount) {
	return v.accel(amount);
}
bool visitor_accel::operation(car_vehicle& v, double amount)  {
	return v.accel(amount);
}






