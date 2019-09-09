#pragma once

#include "proxy/proxy_vehicle.h"


class proxy_locked_vehicle: public proxy_vehicle {

private:
    int m_counter;

public:
    explicit proxy_locked_vehicle(vehicle*);
    void unlock_car();
	
protected:
    bool before();

public:
  
	virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount);
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);


    bool accept(visitor& v, double d);
    virtual ~proxy_locked_vehicle();
	bool unlock();
	
};

