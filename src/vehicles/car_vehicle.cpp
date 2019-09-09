#include "vehicles/car_vehicle.h"

#include "visitor/visitor.h"

car_vehicle::car_vehicle(
				std::string name, color_type color,
				double size, double fuel_capacity,
				double direction, double fuel_consume
				):vehicle(
						name, color, 
						size,fuel_capacity, 
						direction, fuel_consume
						) {}





bool car_vehicle::on() {
	std::cout << "Car ";
	return vehicle::on();
}
bool car_vehicle::off() {
	std::cout << "Car ";
	return vehicle::off();
}
bool car_vehicle::accel(double amount)  {
	std::cout << "Car ";
   return vehicle::accel(amount);
}
bool car_vehicle::turn_to(double amount) {
	std::cout << "Car ";
   return vehicle::turn_to(amount);
}
bool car_vehicle::slow_down(double amount)  {
	std::cout << "Car ";
   return vehicle::slow_down(amount);
}
bool car_vehicle::paint(color_type color) {
	std::cout << "Car ";
   return vehicle::paint(color);
}
bool car_vehicle::fuel_up(double amount) {
	std::cout << "Car ";
   return vehicle::fuel_up(amount);
}



bool car_vehicle::accept(visitor& v, double d) {
	return v.operation(*this, d);
}

bool car_vehicle::unlock() {
	return true;
}


car_vehicle::~car_vehicle() {}

