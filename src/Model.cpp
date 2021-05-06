#include "Model.h"
#include <iostream>
#include <string>

Model::Model(std::string fname, std::string lname) :
	first_name_(fname),
	last_name_(lname)
{
}

Model::Model() : 
	first_name_(""),
	last_name_("")
{
}

Model::~Model(){
}

std::string Model::get_first_name(){
	return first_name_;
}

std::string Model::get_last_name(){
	return last_name_;
}
