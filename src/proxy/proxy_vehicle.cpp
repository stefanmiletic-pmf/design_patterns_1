#include "proxy/proxy_vehicle.h"

#include <iostream>

proxy_vehicle::proxy_vehicle(vehicle* _vehicle):
        m_vehicle(_vehicle) {}


bool proxy_vehicle::on() {
	return m_vehicle->on();
}
bool proxy_vehicle::off() {
	return m_vehicle->off();
}
bool proxy_vehicle::accel(double amount)  {
   return m_vehicle->accel(amount);
}
bool proxy_vehicle::turn_to(double amount) {
   return m_vehicle->turn_to(amount);
}
bool proxy_vehicle::slow_down(double amount)  {
   return m_vehicle->slow_down(amount);
}
bool proxy_vehicle::paint(color_type color) {
   return m_vehicle->paint(color);
}
bool proxy_vehicle::fuel_up(double amount) {
   return m_vehicle->fuel_up(amount);
}


bool proxy_vehicle::accept(visitor& v, double d) {
	return m_vehicle->accept(v, d);
}

proxy_vehicle::~proxy_vehicle() {
	delete m_vehicle;
}

bool proxy_vehicle::unlock(){
	return m_vehicle->unlock();
}


