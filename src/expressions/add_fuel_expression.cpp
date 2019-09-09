#include "expressions/add_fuel_expression.h"

add_fuel_expression::add_fuel_expression(double amount):
        m_amount(amount) {}

bool add_fuel_expression::interpret(vehicle* v) {
      return  v->fuel_up(m_amount);
    }

