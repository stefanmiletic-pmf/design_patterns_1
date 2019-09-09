#include "expressions/turn_off_expression.h"


bool turn_off_expression::interpret(vehicle* v) {
	return v->off();
}

