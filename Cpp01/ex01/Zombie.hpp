	#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );