#include "proxy/proxy_unlocked_plane.h"

#include <iostream>
proxy_unlocked_plane::proxy_unlocked_plane(vehicle* v): proxy_unlocked_vehicle(v) {}

bool proxy_unlocked_plane::on() {
	return proxy_unlocked_vehicle::on();
}
bool proxy_unlocked_plane::off() {
	return proxy_unlocked_vehicle::off();
}
bool proxy_unlocked_plane::accel(double amount)  {
   return proxy_unlocked_vehicle::accel(amount);
}
bool proxy_unlocked_plane::turn_to(double amount) {
   return proxy_unlocked_vehicle::turn_to(amount);
}
bool proxy_unlocked_plane::slow_down(double amount)  {
   return proxy_unlocked_vehicle::slow_down(amount);
}
bool proxy_unlocked_plane::paint(color_type color) {
   return proxy_unlocked_vehicle::paint(color);
}
bool proxy_unlocked_plane::fuel_up(double amount) {
   return proxy_unlocked_vehicle::fuel_up(amount);
}


bool  proxy_unlocked_plane::accept(visitor& v, double d) {
	
	bool r = proxy_unlocked_vehicle::accept(v, d);
	if ( r ) {
		std::cout << " --- completed\n";
	} else {
		std::cout << " --- failed\n";
	}
	
	
	return r;
}


 proxy_unlocked_plane::~proxy_unlocked_plane() {}


