#include "expressions/expression_whole.h"

#include <iostream>

void expression_whole::push_exp(expression* e) {
            m_expressions.push_back(e);
}

bool expression_whole::interpret(vehicle* v) {
	
	
	std::vector<expression*>::iterator it;
	it = m_expressions.begin();
	for ( ; it != m_expressions.end(); ++it ){
			
			if ( !((*it)->interpret(v)) ) {
				std::cout << " --- failed \n";
				
				return false;
			}
			
	}


	return true;
}

expression_whole::~expression_whole() {
	m_expressions.clear();
}


