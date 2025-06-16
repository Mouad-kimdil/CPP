#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
        ClapTrap("_clap_name"),
        ScavTrap("_clap_name"),
        FragTrap("_clap_name"),
        Name("")
{
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) :
        ClapTrap(name + "_clap_name"),
        ScavTrap(name + "_clap_name"),
        FragTrap(name + "_clap_name"),
        Name(name)
{
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap(other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other ) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << Name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::Name << std::endl;
}
