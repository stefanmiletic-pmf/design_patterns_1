#pragma once
#include "expressions/expression.h"

class turn_on_expression: public expression {


public:
    bool interpret(vehicle*);


};
