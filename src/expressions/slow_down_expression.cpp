#include "expressions/slow_down_expression.h"

slow_down_expression::slow_down_expression(double amount):
        m_amount(amount) {}

bool slow_down_expression::interpret(vehicle* v) {
	return v->slow_down(m_amount);
}
