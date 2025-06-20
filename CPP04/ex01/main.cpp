#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "===== Basic Animal Tests =====" << std::endl;
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    std::cout << "\n===== Array of Animals =====" << std::endl;
    const int numAnimals = 4;
    Animal *animals[numAnimals];
    
    for (int k = 0; k < numAnimals; k++) {
        if (k < numAnimals / 2) {
            animals[k] = new Dog();
        } else {
            animals[k] = new Cat();
        }
    }
    
    for (int k = 0; k < numAnimals; k++) {
        std::cout << "Animal " << k << " is a " << animals[k]->getType() << " and makes sound: ";
        animals[k]->makeSound();
    }

    for (int k = 0; k < numAnimals; k++) {
        delete animals[k];
    }

    std::cout << "\n===== Deep Copy Test =====" << std::endl;

    Dog *originalDog = new Dog();
    Brain *dogBrain = originalDog->getBrain();
    dogBrain->setIdea(0, "I love bones");
    dogBrain->setIdea(1, "I want to chase cats");

    Cat *originalCat = new Cat();
    Brain *catBrain = originalCat->getBrain();
    catBrain->setIdea(0, "i love fishes");
    catBrain->setIdea(1, "i want to play");

    Dog *copyDog = new Dog(*originalDog);
    Cat *copyCat = new Cat(*originalCat);

    delete originalDog;
    delete originalCat;

    Brain *copyDogBrain = copyDog->getBrain();
    std::cout << "Copy dog's first idea: " << copyDogBrain->getIdea(0) << std::endl;
    std::cout << "Copy dog's second idea: " << copyDogBrain->getIdea(1) << std::endl;
    
    Brain *copyCatBrain = copyCat->getBrain();
    std::cout << "copy cat's first idea: " << copyCatBrain->getIdea(0) << std::endl;
    std::cout << "copy cat's second idea: " << copyCatBrain->getIdea(1) << std::endl;

    delete copyDog;
    delete copyCat;
    delete meta;
    delete j;
    delete i;
    
    return 0;
}