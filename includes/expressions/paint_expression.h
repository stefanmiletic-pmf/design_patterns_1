#pragma once
#include "expressions/expression.h"
#include "constants/COLORS.h"
#include "vehicles/vehicle.h"

class paint_expression: public expression {


protected:
    int m_color;

public:
    explicit paint_expression(int);

    bool interpret(vehicle*);

};
