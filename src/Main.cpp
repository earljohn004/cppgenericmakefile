#include <iostream>
#include <string>
#include "Model.h"
#include "Logic.h"
#include "common_debug.h"

#ifdef TEST_MODE
#include "unit_test_framework.h"
#endif

#ifndef TEST_MODE
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
#endif
#ifdef TEST_MODE

 TEST(numbers_equal){
	Logic* logic = new Logic();
 	ASSERT_EQUAL(3,logic->get_sum(1,2));
 }

 TEST(random_test){
	Logic* logic = new Logic();
 	ASSERT_EQUAL(29,logic->get_sum(28,1));
 	ASSERT_EQUAL(29,logic->get_sum(24,5));
 }

 TEST_MAIN()

#endif
