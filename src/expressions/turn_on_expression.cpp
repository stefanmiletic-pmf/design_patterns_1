#include "expressions/turn_on_expression.h"

bool turn_on_expression::interpret(vehicle* v) {
	return v->on();
}


