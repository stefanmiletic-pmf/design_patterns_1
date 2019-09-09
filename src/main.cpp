#include "factories/locked_vehicles_factory.h"

#include "factories/unlocked_vehicles_factory.h"
#include "proxy/proxy_vehicle.h"


#include "visitor/visitor_paint.h"
#include "visitor/visitor_fuel_up.h"
#include "visitor/visitor_turn_to.h"
#include "visitor/visitor_accel.h"
#include "visitor/visitor_turn_on.h"
#include "visitor/visitor_turn_off.h"
#include "visitor/visitor_slow_down.h"


#include "expressions/parser.h"

#include <iostream>

 int main() {

    abstract_vehicles_factory* factory_1 = new unlocked_vehicles_factory;
    vehicle* car_1 = factory_1->create_car("BMW", BLUE,  5, 200, 0, 90);




    visitor_turn_on 	m_visitor_turn_on;
    visitor_turn_off 	m_visitor_turn_off;
    visitor_paint 		m_visitor_paint;
    visitor_fuel_up 	m_visitor_fuel_up;
	visitor_turn_to 	m_visitor_turn_to;
	visitor_accel 		m_visitor_accel;
	visitor_slow_down 	m_visitor_slow_down;
	

    car_1->accept(m_visitor_turn_on, 0);
    car_1->accept(m_visitor_paint, BLACK);
    car_1->accept(m_visitor_fuel_up, 10);
    car_1->accept(m_visitor_turn_to, 10);
    car_1->accept(m_visitor_accel, 10);
    car_1->accept(m_visitor_slow_down, 10);
    car_1->accept(m_visitor_turn_off, 0);
	
	delete car_1;
	delete factory_1;
	


    std::cout << "\n\n---------------------------\n\n";

    abstract_vehicles_factory* factory_2 = new locked_vehicles_factory;
    vehicle* car_2 = factory_2->create_car("BMW", WHITE,  5, 60, 0, 90);


	car_2->unlock();
    car_2->accept(m_visitor_turn_on, 0);
    car_2->accept(m_visitor_paint, BLACK);
    car_2->accept(m_visitor_fuel_up, 10);
    car_2->accept(m_visitor_turn_to, 10);
    car_2->accept(m_visitor_fuel_up, 100);
    car_2->accept(m_visitor_accel, 10);
    car_2->accept(m_visitor_slow_down, 10);
    car_2->accept(m_visitor_turn_off, 0);
	
	
	delete car_2;
	delete factory_2;
	



    std::cout << "\n\n---------------------------\n\n";

    abstract_vehicles_factory* factory_3 = new locked_vehicles_factory;
    vehicle* car_3 = factory_3->create_car("BMW", BLACK,  5, 150, 0, 10);
	
	
	car_3->unlock();
    expression* input_result = parser::parse_input("START ACCEL 10 TURNTO 40 ACCEL 20 TURNTO -50 SLOWDOWN 20 PAINT BLUE FUEL 30 END");
    if ( !(input_result->interpret(car_3) ) ) {
		std::cout << "Some of the actions are not completed.\n";
	}

	
	delete car_3;
	delete factory_3;
	delete input_result;

    return 0;

 }
