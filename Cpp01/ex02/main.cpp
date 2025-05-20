#include <iostream>
#include <string.h>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *string_ptr = &brain;
	std::string &string_ref = brain;

	std::cout << "The memory address of the string variable: " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR: " << string_ptr << std::endl;
	std::cout << "The memory address held by stringREF: " << &string_ref << std::endl;
	std::cout << "The value of the string variable: " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *string_ptr << std::endl;
	std::cout << "The value pointed to by stringREF: " << string_ref << std::endl;
}
