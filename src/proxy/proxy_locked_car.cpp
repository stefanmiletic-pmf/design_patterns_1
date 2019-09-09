#include "proxy/proxy_locked_car.h"

#include <iostream>
proxy_locked_car::proxy_locked_car(vehicle* v): proxy_locked_vehicle(v) {}

bool proxy_locked_car::on() {
	return proxy_locked_vehicle::on();
}
bool proxy_locked_car::off() {
	return proxy_locked_vehicle::off();
}
bool proxy_locked_car::accel(double amount)  {
   return proxy_locked_vehicle::accel(amount);
}
bool proxy_locked_car::turn_to(double amount) {
   return proxy_locked_vehicle::turn_to(amount);
}
bool proxy_locked_car::slow_down(double amount)  {
   return proxy_locked_vehicle::slow_down(amount);
}
bool proxy_locked_car::paint(color_type color) {
   return proxy_locked_vehicle::paint(color);
}
bool proxy_locked_car::fuel_up(double amount) {
   return proxy_locked_vehicle::fuel_up(amount);
}


bool proxy_locked_car::accept(visitor& v, double d) {
	
	bool r = proxy_locked_vehicle::accept(v, d);
	if ( r ) {
		std::cout << " --- completed\n";
	} else {
		std::cout << " --- failed\n";
	}
	
	return r;
}

proxy_locked_car::~proxy_locked_car() {}

