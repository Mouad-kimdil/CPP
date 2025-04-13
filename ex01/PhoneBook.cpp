#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	oldest_index = 0;
}

int PhoneBook::non_printable(const std::string &str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (!std::isprint(str[i]))
            return (1);
    }
    return (0);
}

int PhoneBook::is_alphabetic(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isalpha(str[i]) && str[i] != ' ')
			return (1);
	}
	return (0);
}

int PhoneBook::is_number(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '+')
			return (1);
	}
	return (0);
}

int	PhoneBook::get_string(std::string &str, const std::string &message, int flag)
{
	while (true)
	{
		std::cout << message;
		if (!std::getline(std::cin, str))
			return (-1);
		if (PhoneBook::non_printable(str) || str.empty())
			continue ;
		if ((flag == 1 || flag == 2) && is_alphabetic(str))
		{
			if (flag == 1)
				std::cout << "First Name containe only alphabetic characters.\n";
			if (flag == 2)
				std::cout << "Last Name containe only alphabetic characters.\n";
			continue ;
		}
		if (flag == 3 && is_number(str))
		{
			std::cout << "Phone nummber containe only digits.\n";
			continue ;
		}
		break ;
	}
	return (0);
}

void	PhoneBook::add_contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string dsecret)
{
	if (count < 8)
	{
		contacts[count].set_contact(fname, lname, nname, phone, dsecret);
		count++;
		return ;
	}
	contacts[oldest_index].set_contact(fname, lname, nname, phone, dsecret);
	oldest_index = (oldest_index + 1) % 8;
}

void	PhoneBook::search_contact()
{
	int	i, index;

	std::cout << "----------------------------------------------------------------------------\n";
	std::cout << "    Index  | First Name |  Last Name |  Nickname  | Phone num  | dark secret|\n";
	std::cout << "----------------------------------------------------------------------------\n";
	for (i = 0; i < count; i++)
		contacts[i].display_info(i);
	std::cout << "Enter the index of the contact to display: ";
	if (!(std::cin >> index))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (index < 0 || index > i - 1)
	{
		std::cout << "index not valid" << '\n';
		return ;
	}
	contacts[index].display_all();
}
