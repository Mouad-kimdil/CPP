#pragma once 

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap( std::string name );
        DiamondTrap( const DiamondTrap &other );
        ~DiamondTrap();
        DiamondTrap &operator=( const DiamondTrap &other );

        void whoAmI();
        using ScavTrap::attack;
};