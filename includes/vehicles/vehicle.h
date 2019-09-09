#pragma once

#include "constants/COLORS.h"
#include <string>

class visitor;

class vehicle {

friend class proxy_vehicle;

public:
    std::string m_name;
    color_type m_color;
    double m_size;
    double m_fuel_capacity;
    double m_fuel_consume;
    double m_direction;
    double m_speed_atm;
    bool m_is_driving;

public:
    vehicle();
    vehicle(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume);



public:
    virtual bool accept(visitor&, double ) = 0;
	
    virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount);
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);

    virtual ~vehicle();
	virtual bool unlock() = 0;

};
