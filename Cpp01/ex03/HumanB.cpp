#include "HumanB.hpp"

HumanB::HumanB(const std::string &_name) : name(_name) {};

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack() const
{
	if (weapon)
		std::cout << name << "  attacks with their " << weapon->getType() << std::endl;
}
