#pragma once

#include "proxy/proxy_locked_vehicle.h"

class proxy_locked_car : public proxy_locked_vehicle {


public:
    explicit proxy_locked_car(vehicle*);

public:

	virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount);
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);

    bool accept(visitor& v, double d);
    virtual ~proxy_locked_car();

};
