#pragma once
#include "expressions/expression.h"

class turn_off_expression: public expression {

public:
    bool interpret(vehicle* v);

};
