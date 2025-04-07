#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <limits>
#include <cctype>

class Contact
{
	private: 
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact();
		void	set_contact(std::string Fname, std::string Lname, std::string Nname, std::string Pnumber, std::string Dsecret);
		void	display_info(int index) const;
		void	display_all() const;
};

#endif