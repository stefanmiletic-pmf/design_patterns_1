#pragma once
#include "expressions/expression.h"
#include "vehicles/vehicle.h"

class slow_down_expression: public expression {


protected:
    double m_amount;

public:
    explicit slow_down_expression(double);
    bool interpret(vehicle*);

};
