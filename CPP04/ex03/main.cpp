#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {
    std::cout << "=== Testing MateriaSource ===" << std::endl;
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    std::cout << "\n=== Testing Character Creation ===" << std::endl;
    
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");
    
    std::cout << "\n=== Testing Materia Creation and Equipment ===" << std::endl;
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    std::cout << "\n=== Testing Materia Usage ===" << std::endl;
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    std::cout << "\n=== Testing Invalid Usage ===" << std::endl;
    
    me->use(2, *bob);  // Empty slot
    me->use(-1, *bob); // Invalid index
    me->use(10, *bob); // Invalid index
    
    std::cout << "\n=== Testing Unequip ===" << std::endl;
    
    me->unequip(0);
    me->use(0, *bob);  // Should do nothing
    
    std::cout << "\n=== Testing Unknown Materia Type ===" << std::endl;
    
    tmp = src->createMateria("fire");  // Unknown type
    if (tmp == NULL)
        std::cout << "Fire materia not learned" << std::endl;
    
    std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
    
    Character original("original");
    tmp = src->createMateria("ice");
    original.equip(tmp);
    tmp = src->createMateria("cure");
    original.equip(tmp);
    
    Character copy(original);
    std::cout << "Original name: " << original.getName() << std::endl;
    std::cout << "Copy name: " << copy.getName() << std::endl;
    
    copy.use(0, *bob);
    copy.use(1, *bob);
    
    std::cout << "\n=== Testing Full Inventory ===" << std::endl;
    
    Character fullChar("full");
    for (int i = 0; i < 6; i++) {  // Try to equip 6 items (only 4 slots)
        tmp = src->createMateria("ice");
        fullChar.equip(tmp);
        if (i >= 4) {
            delete tmp;  // Clean up excess materia
        }
    }
    
    std::cout << "\n=== Cleanup ===" << std::endl;
    
    delete bob;
    delete me;
    delete src;
    
    return 0;
}