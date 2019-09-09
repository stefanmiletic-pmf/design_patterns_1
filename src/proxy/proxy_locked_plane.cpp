#include "proxy/proxy_locked_plane.h"

#include <iostream>
proxy_locked_plane::proxy_locked_plane(vehicle* v): proxy_locked_vehicle(v) {}

bool proxy_locked_plane::on() {
	return proxy_locked_vehicle::on();
}
bool proxy_locked_plane::off() {
	return proxy_locked_vehicle::off();
}
bool proxy_locked_plane::accel(double amount)  {
   return proxy_locked_vehicle::accel(amount);
}
bool proxy_locked_plane::turn_to(double amount) {
   return proxy_locked_vehicle::turn_to(amount);
}
bool proxy_locked_plane::slow_down(double amount)  {
   return proxy_locked_vehicle::slow_down(amount);
}
bool proxy_locked_plane::paint(color_type color) {
   return proxy_locked_vehicle::paint(color);
}
bool proxy_locked_plane::fuel_up(double amount) {
   return proxy_locked_vehicle::fuel_up(amount);
}



bool proxy_locked_plane::accept(visitor& v, double d) {
	
	
	bool r = proxy_locked_vehicle::accept(v, d);
	if ( r ) {
		std::cout << " --- completed\n";
	} else {
		std::cout << " --- failed\n";
	}
	
	return r;
}

proxy_locked_plane::~proxy_locked_plane() {}


