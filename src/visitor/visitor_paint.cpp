#include "visitor/visitor_paint.h"

#include "vehicles/plane_vehicle.h"
#include "vehicles/car_vehicle.h"

bool visitor_paint::operation(plane_vehicle& v, double b)  {
	color_type l = (color_type) int(b);
	return v.paint(l);
}
bool visitor_paint::operation(car_vehicle& v, double b)  {
	color_type l = (color_type) int(b);
	return v.paint(l);
}






