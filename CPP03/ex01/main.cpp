#include "ScavTrap.hpp"

int main() {
    // Test constructors
    std::cout << "\n--- Testing Constructors ---\n" << std::endl;
    ClapTrap defaultClap;
    ClapTrap namedClap("Bob");
    ScavTrap defaultScav;
    ScavTrap namedScav("Scavvy");
    
    // Test copy constructor
    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;
    ScavTrap copiedScav(namedScav);
    
    // Test assignment operator
    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;
    ScavTrap assignedScav;
    assignedScav = namedScav;
    
    std::cout << "\n--- Testing ClapTrap vs ScavTrap ---\n" << std::endl;
    
    // Compare ClapTrap and ScavTrap attacks
    namedClap.attack("Target");
    namedScav.attack("Target");
    
    // Test ScavTrap specific function
    std::cout << "\n--- Testing ScavTrap Special Ability ---\n" << std::endl;
    namedScav.guardGate();
    
    // Test damage and repair
    std::cout << "\n--- Testing Damage and Repair ---\n" << std::endl;
    namedScav.takeDamage(30);
    namedScav.beRepaired(20);
    
    // Test energy depletion
    std::cout << "\n--- Testing Energy Depletion ---\n" << std::endl;
    for (int i = 0; i < 50; i++) {
        namedScav.attack("Enemy");
    }
    
    // Test after energy depletion
    namedScav.attack("Enemy");
    namedScav.beRepaired(10);
    
    std::cout << "\n--- End of Tests ---\n" << std::endl;
    
    return 0;
}