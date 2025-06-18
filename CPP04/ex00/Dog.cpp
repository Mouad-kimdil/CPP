#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "Dog default constructor has been called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor has been called!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor has been called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}