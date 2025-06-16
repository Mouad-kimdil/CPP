#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Default constructor has been called!" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Parametrized constructor has been called!" << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other) {
    std::cout << "FragTrap Copy constructor has been called!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor has been called!" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &other ) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return (*this);
}

void FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap: high five guys" << std::endl;
}
