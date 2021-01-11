#include <iostream>
#include <string>
#include "Model.h"

int main(){

	Model* m = new Model("Earl", "Abaquita");

	std::cout << m->get_first_name() << std::endl;
	std::cout << m->get_last_name() << std::endl;

	return 0;
}
