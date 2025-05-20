#include "Weapon.hpp"

Weapon::Weapon(const std::string &_type) : type(_type) {}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(const std::string &new_type)
{
	type = new_type;
}
