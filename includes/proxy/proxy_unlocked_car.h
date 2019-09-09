#pragma once

#include "proxy/proxy_unlocked_vehicle.h"
#include <iostream>

class proxy_unlocked_car: public proxy_unlocked_vehicle {

public:
    proxy_unlocked_car(vehicle*);

public:

    virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount);
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);


public:
    virtual ~proxy_unlocked_car();
    bool accept(visitor& v, double d);



};
