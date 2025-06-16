#pragma once

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string Name;
        int         HitPoint;
        int         EnergyPoint;
        int         AttackDamage;
    public:
        ClapTrap();
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap &other );
        ClapTrap    &operator=( const ClapTrap &other );
        ~ClapTrap();

        void    attack( const std::string &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};
