#include "Model.h"
#include "Logic.h"
#include "common_debug.h"

#ifdef TEST_MODE
#include "unit_test_framework.h"
#endif

#include <iostream>
#include <string>
#include <memory>

#ifndef TEST_MODE
int main(){

	std::unique_ptr<Model> m = std::make_unique<Model>("Earl", "Abaquita");
	std::unique_ptr<Logic> logic = std::make_unique<Logic>();
	auto i = 5;

	VAR_LOG( i );
	VAR_LOG( m->get_first_name() );
	MESSAGE_LOG("Hello");

	return 0;
}
#endif
#ifdef TEST_MODE

 TEST(numbers_equal){
	std::unique_ptr<Logic> logic = std::make_unique<Logic>();
 	ASSERT_EQUAL(3,logic->get_sum(1,2));
 }

 TEST(random_test){
	std::unique_ptr<Logic> logic = std::make_unique<Logic>();
 	ASSERT_EQUAL(29,logic->get_sum(28,1));
 	ASSERT_EQUAL(29,logic->get_sum(24,5));
 }

 TEST_MAIN()

#endif
