#include "expressions/parser.h"

expression_whole* parser::parse_input(std::string _input) {


    std::istringstream iss(_input);
	
    std::string token;
    std::string token_sub;

    expression_whole* result = new expression_whole;



    while ( getline(iss, token, ' ') ){
			if ( token == "START") {
				
				result->push_exp(new turn_on_expression);
				
			}	else if ( token == "ACCEL" ) {
				
				getline(iss, token_sub, ' ');
				result->push_exp(new accel_expression(parser::decode_amount(token_sub)));
				
			}	else if ( token == "SLOWDOWN" ) {
				
				getline(iss, token_sub, ' ');
				result->push_exp(new slow_down_expression(parser::decode_amount(token_sub)));
				
			}	else if ( token == "END" ) {
				
					result->push_exp(new turn_off_expression);
					
			}	else if ( token == "PAINT" ) {

					getline(iss, token_sub, ' ');
					
					int _color = WHITE;
					
					if (token_sub == "BLACK" ) {
						_color = BLACK;
					}else if ( token_sub == "WHITE" ) {
						_color = WHITE;
					} else if ( token_sub == "BLUE" ){
						_color = BLUE;
					} 
					
					result->push_exp(new paint_expression(_color));
					
			}	else if ( token == "FUEL" ) {

					getline(iss, token_sub, ' ');
					result->push_exp(new add_fuel_expression(parser::decode_amount(token_sub)));
					
			}	else if ( token == "TURNTO" ) {
				
					getline(iss, token_sub, ' ');
					result->push_exp(new turn_to_expression(parser::decode_amount(token_sub)));
				
			}	else {
					std::cout << "PARSING ERROR\n";
					return NULL;
					
			}
		
		
        }






        return result;

}

int parser::decode_amount(std::string _input) {

        int sign = 1;
        int i = 0;

        if ( _input[0] == '-' ){
                sign = -1;
                i = 1;
        }


        int len = _input.length();

        int res = 0;

        for ( ; i < len; ++i ) {


            res *= 10;
            res += ( _input[i] - '0' );
        }

        return res*sign;

}

