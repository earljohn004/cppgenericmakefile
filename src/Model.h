#ifndef _SRC_MODEL_H_
#define _SRC_MODEL_H_

#include <iostream>
#include <string>

class Model{

	public:
		Model();
		Model(std::string fname, std::string lname);
		~Model();
		std::string get_first_name();
		std::string get_last_name();

	private:
		std::string first_name_;
		std::string last_name_;
};

#endif //_SRC_MODEL_H_
