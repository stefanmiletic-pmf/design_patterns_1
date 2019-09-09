#include "vehicles/vehicle.h"
#include "visitor/visitor.h"

#include <iostream>

vehicle::vehicle() {}
vehicle::vehicle(std::string name,
				color_type color,
				double size,
				double fuel_capacity,
				double direction,
				double fuel_consume):
					m_name(name),
					m_color(color),
					m_size(size),
					m_fuel_capacity(fuel_capacity),
					m_fuel_consume(fuel_consume),
					m_direction(direction),
					m_speed_atm(0),
					m_is_driving(false) {}



bool vehicle::on() {
	std::cout << "[" << m_name << "] is turning on\n";
	
	if ( m_is_driving)
		return false;
	
	m_is_driving = true;
	
	
	return true;
}
bool vehicle::off() {
	std::cout << "[" << m_name << "] is turning off\n";
	
	if (!m_is_driving)
		return false;
	
	m_is_driving = false;
	
	
	return true;
}
bool vehicle::accel(double amount) {
	std::cout << "[" << m_name << "] is accelerating for +" << amount << " units\n";
	  
	if ( !m_is_driving)
		return false;
	
	if ( 0 > m_fuel_capacity - m_fuel_consume )
		return false;



	m_fuel_capacity -= m_fuel_consume;
	m_speed_atm += amount;
	
	return true;
	
}
bool vehicle::turn_to(double amount) {
	std::cout << "[" << m_name << "] turning for " << amount << " degrees \n";
	
	if ( !m_is_driving)
		return false;

	
	if ( 0 > m_fuel_capacity - m_fuel_consume )
		return false;


	m_fuel_capacity -= m_fuel_consume;
	m_direction += amount;
	
	
	return true;
	
}
bool vehicle::slow_down(double amount) {
	std::cout << "[" << m_name << "] slowing down for " << amount << " units\n";

	
	  
	if ( !m_is_driving)
		return false;

	
	
	m_speed_atm = ( m_speed_atm - amount < 0 ) ? 0 : m_speed_atm - amount;
	return true;

}
bool vehicle::paint(color_type color) {
	
	std::string s;
	switch(color) {
		
		case 0:
			s = "BLACK";
			break;
		case 1:
			s = "WHITE";
			break;
		case 2:
			s = "BLUE";
			break;
		default:
			s = "PINK";
		
	}
	
	std::cout << "[" << m_name << "] is painting in " << s << " color\n";
	
	if (m_is_driving){
		return false;
	}
	
	
	m_color = color;
	return true;
}
bool vehicle::fuel_up(double amount) {
	std::cout << "[" << m_name << "] is fueled up for " << amount << " litres \n";
	
	
	if (!m_is_driving)
		return false;
	
	
	m_fuel_capacity += amount;
	return true;
}

vehicle::~vehicle() {}

