#include <iostream>
#include <string>
#include "Model.h"
#include "Logic.h"
#include "common_debug.h"
// #include "unit_test_framework.h"

int main(){

	Model* m = new Model("Earl John", "Abaquita");
	Logic* logic = new Logic();
	auto i = 5;

	// std::cout << m->get_first_name() << std::endl;
	// std::cout << m->get_last_name() << std::endl;
	// std::cout << logic->get_sum(1,2) << std::endl;
	// std::cout << i << std::endl;

	VAR_LOG( i );
	VAR_LOG( m->get_first_name() );
	MESSAGE_LOG("Hello");

	return 0;
}

// TEST(numbers_equal){
// 	int spam = 42;
// 	ASSERT_EQUAL(spam,42);
// }
//
// TEST_MAIN()
