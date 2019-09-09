#pragma once
#include "expressions/expression.h"

class turn_to_expression: public expression {


protected:
    double m_amount;

public:
    explicit turn_to_expression(double);
    bool interpret(vehicle*);


};
