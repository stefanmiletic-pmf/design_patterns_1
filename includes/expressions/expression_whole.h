#pragma once

#include "expressions/expression.h"
#include <vector>

class vehicle;

class expression_whole: public expression {

    protected:
        std::vector<expression*> m_expressions;

    public:
        void push_exp(expression* e);
		bool interpret(vehicle* v);
		
		virtual ~expression_whole();



};
