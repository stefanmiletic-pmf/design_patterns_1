#pragma once

#include "expressions/expression_whole.h"
#include "expressions/add_fuel_expression.h"
#include "expressions/paint_expression.h"
#include "expressions/turn_on_expression.h"
#include "expressions/accel_expression.h"
#include "expressions/turn_off_expression.h"
#include "expressions/slow_down_expression.h"
#include "expressions/turn_to_expression.h"

#include "constants/COLORS.h"


#include <string>
#include <sstream>
#include <iostream>

class parser {

public:
    static expression_whole* parse_input(std::string);

private:
    static int decode_amount(std::string);

};
