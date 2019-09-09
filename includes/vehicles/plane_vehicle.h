#pragma once

#include "vehicles/vehicle.h"
//#include "visitor/visitor.h"

#include "visitor/visitor.h"
class visitor;

class plane_vehicle: public vehicle {


public:
    explicit plane_vehicle(std::string name,
                    color_type color,
                    double size,
                    double fuel_capacity,
                    double direction,
                    double fuel_consume);



	
public:
    virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount);
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);



    bool accept(visitor& v, double d);
    virtual ~plane_vehicle();
	
	bool unlock();

};
