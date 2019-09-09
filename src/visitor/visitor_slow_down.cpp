#include "visitor/visitor_slow_down.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"
bool visitor_slow_down::operation(plane_vehicle& v, double amount) {
	return v.slow_down(amount);
}
bool visitor_slow_down::operation(car_vehicle& v, double amount)  {
	return v.slow_down(amount);
}







