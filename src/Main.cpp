#include <iostream>
#include <string>
#include "Model.h"
#include "Logic.h"
#include "common_debug.h"

int main(){

	Model* m = new Model("Earl John", "Abaquita");
	Logic* logic = new Logic();
	auto i = 5;

	// std::cout << m->get_first_name() << std::endl;
	// std::cout << m->get_last_name() << std::endl;
	// std::cout << logic->get_sum(1,2) << std::endl;
	// std::cout << i << std::endl;
	
	GEN_DEBUG( i );
	GEN_DEBUG( m->get_first_name() );

	return 0;
}
