#include "vehicles/plane_vehicle.h"

plane_vehicle::plane_vehicle(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume):
					
                        vehicle(name, color, size,
                               fuel_capacity, direction, fuel_consume) {}





bool plane_vehicle::on() {
	std::cout << "Plane ";
	return vehicle::on();
}
bool plane_vehicle::off() {
	std::cout << "Plane ";
	return vehicle::off();
}
bool plane_vehicle::accel(double amount)  {
	std::cout << "Plane ";
   return vehicle::accel(amount);
}
bool plane_vehicle::turn_to(double amount) {
	std::cout << "Plane ";
   return vehicle::turn_to(amount);
}
bool plane_vehicle::slow_down(double amount)  {
	std::cout << "Plane ";
   return vehicle::slow_down(amount);
}
bool plane_vehicle::paint(color_type color) {
	std::cout << "Plane ";
   return vehicle::paint(color);
}
bool plane_vehicle::fuel_up(double amount) {
	std::cout << "Plane ";
   return vehicle::fuel_up(amount);
}



bool plane_vehicle::accept(visitor& v, double d) {
	return v.operation(*this, d);
}

bool plane_vehicle::unlock() {
	return true;
}
plane_vehicle::~plane_vehicle() {}

