#include "proxy/proxy_unlocked_vehicle.h"


proxy_unlocked_vehicle::proxy_unlocked_vehicle(vehicle* _vehicle):
        proxy_vehicle(_vehicle) {}


bool proxy_unlocked_vehicle::on() {
	return proxy_vehicle::on();
}
bool proxy_unlocked_vehicle::off() {
	return proxy_vehicle::off();
}
bool proxy_unlocked_vehicle::accel(double amount)  {
   return proxy_vehicle::accel(amount);
}
bool proxy_unlocked_vehicle::turn_to(double amount) {
   return proxy_vehicle::turn_to(amount);
}
bool proxy_unlocked_vehicle::slow_down(double amount)  {
   return proxy_vehicle::slow_down(amount);
}
bool proxy_unlocked_vehicle::paint(color_type color) {
   return proxy_vehicle::paint(color);
}
bool proxy_unlocked_vehicle::fuel_up(double amount) {
   return proxy_vehicle::fuel_up(amount);
}


bool proxy_unlocked_vehicle::accept(visitor& v, double d) {

	return proxy_vehicle::accept(v, d);
}

bool proxy_unlocked_vehicle::unlock(){
	return proxy_vehicle::unlock();
}

 proxy_unlocked_vehicle::~proxy_unlocked_vehicle() {}
