#pragma once

#include "vehicles/vehicle.h"

class proxy_vehicle: public vehicle {

protected:
    vehicle* m_vehicle;

public:
    explicit proxy_vehicle(vehicle*);

public:

   virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount); 
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);


    bool accept(visitor& v, double d);
    virtual ~proxy_vehicle();
	bool unlock();

};
