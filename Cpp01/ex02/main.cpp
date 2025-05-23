#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << &str_ptr << std::endl;
	std::cout << "The memory address held by stringREF: " << &str_ref << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << str_ptr << std::endl;
	std::cout << "The value pointed to by stringREF: " << str_ref << std::endl;
}
