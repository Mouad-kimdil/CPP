#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	PhoneBook	phonebook;
	std::string	command;

	(void)  av;
	if (ac != 1)
		return (1);
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
		{
			std::string Fname, Lname, Nname, Phone, Secret;
			if (phonebook.get_string(Fname, "Enter First Name: ", 1) == -1)
				continue ;
			if (phonebook.get_string(Lname, "Enter Last Name: ", 2) == -1)
				continue ;
			if (phonebook.get_string(Nname, "Enter Nickname: ", 0) == -1)
				continue ;
			if (phonebook.get_string(Phone, "Enter Phone Number: ", 3) == -1)
				continue ;
			if (phonebook.get_string(Secret, "Enter Darkest Secret: ", 0) == -1)
				continue ;
			phonebook.add_contact(Fname, Lname, Nname, Phone, Secret);
		}
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
