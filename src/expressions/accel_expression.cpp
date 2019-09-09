#include "expressions/accel_expression.h"

accel_expression::accel_expression(double amount):
        m_amount(amount) {}

bool accel_expression::interpret(vehicle* v) {
	return v->accel(m_amount);
}


