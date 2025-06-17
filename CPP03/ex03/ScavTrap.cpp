#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap Default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap Parameterized constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    this->HitPoint = other.HitPoint;
    this->EnergyPoint = other.EnergyPoint;
    this->AttackDamage = other.AttackDamage;
    std::cout << "ScavTrap Copy constructor has been called!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor has been called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " has entered Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (EnergyPoint > 0) {
        EnergyPoint--;
        std::cout << "ScavTrap " << Name << " attacks " << target 
            << ", causing " << AttackDamage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << Name << " has no energy to attack!" << std::endl;
    }
}