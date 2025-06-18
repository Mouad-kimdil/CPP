#include "DiamondTrap.hpp"

int main() {
    std::cout << "\n--- Testing Constructors ---\n" << std::endl;

    DiamondTrap defaultDiamond;
    DiamondTrap namedDiamond("Diamond");
    
    std::cout << "\n--- Testing Copy Constructor ---\n" << std::endl;

    DiamondTrap copiedDiamond(namedDiamond);
    
    std::cout << "\n--- Testing Assignment Operator ---\n" << std::endl;

    DiamondTrap assignedDiamond;
    assignedDiamond = namedDiamond;
    
    std::cout << "\n--- Testing Inherited Methods ---\n" << std::endl;
    
    namedDiamond.attack("Target");
    
    namedDiamond.guardGate();
    namedDiamond.highFivesGuys();
    
    std::cout << "\n--- Testing whoAmI Method ---\n" << std::endl;
    namedDiamond.whoAmI();
    
    std::cout << "\n--- Testing Damage and Repair ---\n" << std::endl;
    namedDiamond.takeDamage(30);
    namedDiamond.beRepaired(15);
    
    std::cout << "\n--- Testing Energy Depletion ---\n" << std::endl;
    for (int i = 0; i < 49; i++) {
        namedDiamond.attack("Enemy");
    }
    
    namedDiamond.attack("Enemy");
    namedDiamond.beRepaired(10);
    
    std::cout << "\n--- End of Tests ---\n" << std::endl;
    
    return 0;
}
