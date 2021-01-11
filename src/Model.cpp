#include "Model.h"

Model::Model(){
}

Model::~Model(){
}

Model::Model(std::string first_name, std::string last_name){
	first_name_ = first_name;
	last_name_ = last_name;
}

std::string Model::get_first_name(){
	return first_name_;
}

std::string Model::get_last_name(){
	return last_name_;
}

void Model::set_first_name(const std::string name){
	first_name_ = name;
}

void Model::set_last_name(const std::string name){
	last_name_ = name;
}
