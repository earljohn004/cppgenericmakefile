#include <iostream>
#include <string>

class Model{
	private:
		std::string first_name_;
		std::string last_name_;

	public:
		Model();
		Model(std::string first_name, std::string last_name);
		~Model();
		std::string get_first_name();
		std::string get_last_name();
		void set_first_name(const std::string name);
		void set_last_name(const std::string name);

};
