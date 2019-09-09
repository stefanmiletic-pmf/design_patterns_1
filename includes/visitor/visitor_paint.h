#pragma once

#include "visitor/visitor.h"

class visitor_paint: public visitor {


public:
    bool operation(plane_vehicle& v, double b);
    bool operation(car_vehicle& obj, double b);

};






