#pragma once
#include "expressions/expression.h"


class accel_expression: public expression {


protected:
    double m_amount;

public:
    explicit accel_expression(double);
    bool interpret(vehicle* v);

};
