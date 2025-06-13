#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
    std::cout << "The default constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
    std::cout << "The parametrize constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ) {
    Name = other.Name;
    HitPoint = other.HitPoint;
    EnergyPoint = other.EnergyPoint;
    AttackDamage = other.AttackDamage;
    std::cout << "The copy constructor has been called!" << std::endl;
}

ClapTrap    &ClapTrap::operator=( const ClapTrap &other ) {
    if (this != &other) {
        Name = other.Name;
        HitPoint = other.HitPoint;
        EnergyPoint = other.EnergyPoint;
        AttackDamage = other.AttackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "The destructor has been called!" << std::endl;
}

void    ClapTrap::attack( const std::string &target ) {
    if (EnergyPoint > 0) {
        EnergyPoint--;
        std::cout << "ClapTrap " << Name << " attacks " 
        << target << ", causing " << AttackDamage 
        << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << Name << " has no energy to attack!" << std::endl;
    }
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (HitPoint > 0) {
        HitPoint -= amount;
        if (HitPoint < 0)
            HitPoint = 0;
        std::cout << "ClapTrap " << Name << " takes "
        << amount << " damage, ouch!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount ) {
    if (EnergyPoint > 0 && HitPoint > 0) {
        HitPoint += amount;
        EnergyPoint--;
        std::cout << "ClapTrap " << Name << " is repaired for "
        << amount << " hit points, feeling better!" << std::endl;
    }
    else if ( HitPoint <= 0 ) {
        std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
    }
    else if ( EnergyPoint <= 0 ) {
        std::cout << "ClapTrap " << Name << " has no energy to repair!" << std::endl;
    } 
}