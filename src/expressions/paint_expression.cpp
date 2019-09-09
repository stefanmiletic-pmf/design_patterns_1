#include "expressions/paint_expression.h"

paint_expression::paint_expression(int b):
        m_color(b) {}

bool paint_expression::interpret(vehicle* v) {
	return v->paint((color_type) m_color);
}

