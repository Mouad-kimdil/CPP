#include "DiamondTrap.hpp"

int main() {
    // Test constructors
    std::cout << "\n--- Testing Constructors ---\n" << std::endl;

    DiamondTrap defaultDiamond;
    DiamondTrap namedDiamond("Diamond");
    
    // Test copy constructor
    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;

    DiamondTrap copiedDiamond(namedDiamond);
    
    // Test assignment operator
    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;

    DiamondTrap assignedDiamond;
    assignedDiamond = namedDiamond;
    
    // Test inherited methods
    std::cout << "\n--- Testing Inherited Methods ---\n" << std::endl;
    
    // Test attack (should use ScavTrap's version)
    namedDiamond.attack("Target");
    
    // Test special abilities from both parents
    namedDiamond.guardGate();  // From ScavTrap
    namedDiamond.highFivesGuys();  // From FragTrap
    
    // Test DiamondTrap's special method
    std::cout << "\n--- Testing whoAmI Method ---\n" << std::endl;
    namedDiamond.whoAmI();
    
    // Test damage and repair
    std::cout << "\n--- Testing Damage and Repair ---\n" << std::endl;
    namedDiamond.takeDamage(30);
    namedDiamond.beRepaired(15);
    
    // Test energy depletion
    std::cout << "\n--- Testing Energy Depletion ---\n" << std::endl;
    for (int i = 0; i < 49; i++) {
        namedDiamond.attack("Enemy");
    }
    
    // Test after energy depletion
    namedDiamond.attack("Enemy");
    namedDiamond.beRepaired(10);
    
    std::cout << "\n--- End of Tests ---\n" << std::endl;
    
    return 0;
}