#pragma once

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon		*weapon;
	public:
		HumanB(const std::string &_name);
		void	setWeapon(Weapon &_weapon);
		void	attack() const;
};
