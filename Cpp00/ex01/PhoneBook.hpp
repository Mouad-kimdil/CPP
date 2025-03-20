#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define	ARG_ERR	"Error: Number of arguments must be 2."

class PhoneBook
{
	private:
		Contact 	contacts[8];
		int			count;
		int			oldest_index;
	public:
		PhoneBook();
		void		add_contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string dsecret);
		void		search_contact();
		static int	non_printable(const std::string &str);
		static int	is_alphabetic(const std::string &str);
		static int	is_number(const std::string &str);
		int			get_string(std::string &str, const std::string &message, int flag);
};

#endif
