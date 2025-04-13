#pragma once

#include <iostream>
#include <string.h>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string &getType() const;
		void	setType(const std::string &new_type);
		Weapon(const std::string &type);
		~Weapon();
};
