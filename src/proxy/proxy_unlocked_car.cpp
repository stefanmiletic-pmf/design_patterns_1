#include "proxy/proxy_unlocked_car.h"

#include <iostream>
proxy_unlocked_car::proxy_unlocked_car(vehicle* v): proxy_unlocked_vehicle(v) {}


bool proxy_unlocked_car::on() {
	return proxy_unlocked_vehicle::on();
}
bool proxy_unlocked_car::off() {
	return proxy_unlocked_vehicle::off();
}
bool proxy_unlocked_car::accel(double amount)  {
   return proxy_unlocked_vehicle::accel(amount);
}
bool proxy_unlocked_car::turn_to(double amount) {
   return proxy_unlocked_vehicle::turn_to(amount);
}
bool proxy_unlocked_car::slow_down(double amount)  {
   return proxy_unlocked_vehicle::slow_down(amount);
}
bool proxy_unlocked_car::paint(color_type color) {
   return proxy_unlocked_vehicle::paint(color);
}
bool proxy_unlocked_car::fuel_up(double amount) {
   return proxy_unlocked_vehicle::fuel_up(amount);
}


proxy_unlocked_car::~proxy_unlocked_car() {}


bool proxy_unlocked_car::accept(visitor& v, double d) {
	
	bool r = proxy_unlocked_vehicle::accept(v, d);
	if ( r ) {
		std::cout << " --- completed\n";
	} else {
		std::cout << " --- failed\n";
	}
	
	
	return r;
}



