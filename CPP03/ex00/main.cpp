#include "ClapTrap.hpp"

int main() {
    // Test constructors
    std::cout << "\n--- Testing Constructors ---\n" << std::endl;
    ClapTrap defaultTrap;
    ClapTrap bob("Bob");
    ClapTrap bobClone(bob);
    
    std::cout << "\n--- Testing ClapTrap functionality ---\n" << std::endl;

    bob.attack("Enemy");
    bob.takeDamage(5);
    bob.beRepaired(3);

    std::cout << "\n--- Testing energy depletion ---\n" << std::endl;

    for (int i = 0; i < 10; i++) {
        bob.attack("Enemy");
    }

    // Test after energy depletion
    bob.attack("Enemy");
    bob.beRepaired(5);
    
    std::cout << "\n--- End of Tests ---\n" << std::endl;

    return 0;
}