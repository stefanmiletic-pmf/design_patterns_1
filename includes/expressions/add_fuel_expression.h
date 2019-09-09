#pragma once
#include "expressions/expression.h"

class add_fuel_expression: public expression {


protected:
    double m_amount;

public:
    explicit add_fuel_expression(double);
    bool interpret(vehicle* v);

};
