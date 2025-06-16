#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Test constructors
    std::cout << "\n--- Testing Constructors ---\n" << std::endl;

    ClapTrap defaultClap;
    ClapTrap namedClap("Bob");
    ScavTrap defaultScav;
    ScavTrap namedScav("Scavvy");
    FragTrap defaultFrag;
    FragTrap namedFrag("Fragyy");
    
    // Test copy constructor
    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;

    FragTrap copiedFrag(namedFrag);
    
    // Test assignment operator
    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;

    FragTrap assignedFrag;
    assignedFrag = namedFrag;
    
    std::cout << "\n--- Testing ClapTrap vs ScavTrap ---\n" << std::endl;
    
    // Compare ClapTrap and ScavTrap attacks
    namedClap.attack("Target");
    namedScav.attack("Target");
    
    // Test ScavTrap specific function
    std::cout << "\n--- Testing ScavTrap Special Ability ---\n" << std::endl;
    namedScav.guardGate();

    
    std::cout << "\n--- Testing FragTrap Special Ability ---\n" << std::endl;
    namedFrag.highFivesGuys();
    
    // Test damage and repair
    std::cout << "\n--- Testing Damage and Repair ---\n" << std::endl;
    namedFrag.takeDamage(30);
    namedFrag.beRepaired(15);
    
    // Test energy depletion
    std::cout << "\n--- Testing Energy Depletion ---\n" << std::endl;
    for (int i = 0; i < 99; i++) {
        namedFrag.attack("Enemy");
    }
    
    // Test after energy depletion
    namedFrag.attack("Enemy");
    namedFrag.beRepaired(10);
    
    std::cout << "\n--- End of Tests ---\n" << std::endl;
    
    return 0;
}