#include "ScavTrap.hpp"

int main() {
    std::cout << "\n--- Testing Constructors ---\n" << std::endl;
    ClapTrap defaultClap;
    ClapTrap namedClap("Bob");
    ScavTrap defaultScav;
    ScavTrap namedScav("Scavvy");
    
    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;
    ScavTrap copiedScav(namedScav);
    
    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;
    ScavTrap assignedScav;
    assignedScav = namedScav;
    
    std::cout << "\n--- Testing ClapTrap vs ScavTrap ---\n" << std::endl;
    
    namedClap.attack("Target");
    namedScav.attack("Target");
    
    std::cout << "\n--- Testing ScavTrap Special Ability ---\n" << std::endl;
    namedScav.guardGate();
    
    std::cout << "\n--- Testing Damage and Repair ---\n" << std::endl;
    namedScav.takeDamage(30);
    namedScav.beRepaired(20);
    
    std::cout << "\n--- Testing Energy Depletion ---\n" << std::endl;
    for (int i = 0; i < 50; i++) {
        namedScav.attack("Enemy");
    }
    
    namedScav.attack("Enemy");
    namedScav.beRepaired(10);
    
    std::cout << "\n--- End of Tests ---\n" << std::endl;
    
    return 0;
}