#include "proxy/proxy_locked_vehicle.h"
#include <iostream>

proxy_locked_vehicle::proxy_locked_vehicle(vehicle* _vehicle):
        proxy_vehicle(_vehicle), m_counter(0) {}

bool proxy_locked_vehicle::unlock() {
	
	m_counter = 10;
	return true;
}
	
bool proxy_locked_vehicle::before() {
	if ( --m_counter >= 0 ){
		std::cout << m_counter << " operations have left.\n";
		return true;
	} else {

		std::cout << "Car is locked;\n";
		std::cout << "Push the key? (y/n)\n";
		std::string _input;
		std::cin >> _input;
		if ( _input == "y" ){
			unlock();
			return true;
		} else if ( _input == "n" ) {
			return false;
		}
		return false;
	}
}

bool proxy_locked_vehicle::on() {
	
	if ( before() ) {
		return proxy_vehicle::on();
	}else 
		return false;
}
bool proxy_locked_vehicle::off() {
	
	if ( before() ) {
		return proxy_vehicle::off();
	}else 
		return false;
}
bool proxy_locked_vehicle::accel(double amount)  {
	
	if ( before() ) {
		return proxy_vehicle::accel(amount);
	}else 
		return false;
}
bool proxy_locked_vehicle::turn_to(double amount) {
	
	if ( before() ) {
		return proxy_vehicle::turn_to(amount);
	}else 
		return false;
}
bool proxy_locked_vehicle::slow_down(double amount)  {
	
	if ( before() ) {
		return proxy_vehicle::slow_down(amount);
	}else 
		return false;
}
bool proxy_locked_vehicle::paint(color_type color) {
	
	if ( before() ) {
		return proxy_vehicle::paint(color);
	}else 
		return false;
	
}
bool proxy_locked_vehicle::fuel_up(double amount) {
	
	if ( before() ) {
		return proxy_vehicle::fuel_up(amount);
	}else 
		return false;
	
}



bool proxy_locked_vehicle::accept(visitor& v, double d) {
	if ( before() ){
		return proxy_vehicle::accept(v, d);
	} else {
		return false;
	}
}


proxy_locked_vehicle::~proxy_locked_vehicle() {}

