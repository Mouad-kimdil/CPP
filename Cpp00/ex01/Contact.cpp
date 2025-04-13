#include "Contact.hpp"


void	Contact::set_contact(std::string Fname, std::string Lname, std::string Nname, std::string Pnumber, std::string Dsecret)
{
	first_name = Fname;
	last_name = Lname;
	nick_name = Nname;
	phone_number = Pnumber;
	darkest_secret = Dsecret;
}

void	Contact::display_info(int index) const
{
	std::cout << std::setw(10) << index << " | "
			 << std::setw(10) << (first_name.length() > 10 ? first_name.substr(0, 9) + "." : first_name) << " | "
			 << std::setw(10) << (last_name.length() > 10 ? last_name.substr(0, 9) + "." : last_name) << " | "
			 << std::setw(10) << (nick_name.length() > 10 ? nick_name.substr(0, 9) + "." : nick_name) << " | "
			 << std::setw(10) << "**********" << " | "
			 << std::setw(10) << "**********" << " | \n";
	std::cout << "----------------------------------------------------------------------------\n";
}

void	Contact::display_all() const
{
	std::cout << "First Name: " << first_name << "\n"; 
	std::cout << "Last Name: " << last_name << "\n"; 
	std::cout << "Nick Name: " << nick_name << "\n"; 
	std::cout << "Phone Number : " << phone_number << "\n"; 
	std::cout << "Darkest Secret : " << darkest_secret << "\n"; 
}
