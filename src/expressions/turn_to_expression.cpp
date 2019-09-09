#include "expressions/turn_to_expression.h"
#include <iostream>
turn_to_expression::turn_to_expression(double amount):
	m_amount(amount) {}

bool turn_to_expression::interpret(vehicle* v) {
	return v->turn_to(m_amount);
}

