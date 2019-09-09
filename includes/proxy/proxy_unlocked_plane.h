#pragma once

#include "proxy/proxy_unlocked_vehicle.h"

class proxy_unlocked_plane: public proxy_unlocked_vehicle {

public:
    explicit proxy_unlocked_plane(vehicle*);
public:

    virtual bool on();
    virtual bool off();
    virtual bool accel(double amount);
    virtual bool turn_to(double amount);
    virtual bool slow_down(double amount);
    virtual bool paint(color_type color);
    virtual bool fuel_up(double amount);


    bool accept(visitor& v, double d);
    virtual ~proxy_unlocked_plane();

};
