#include "Dog.hpp"

Dog::Dog() : Animal() {
    dogBrain = new Brain();
    type = "Dog";
    std::cout << "Dog default constructor has been called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    dogBrain = new Brain(*(other.dogBrain));
    std::cout << "Dog copy constructor has been called!" << std::endl;
}

Dog::~Dog() {
    delete dogBrain;
    std::cout << "Dog destructor has been called!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete dogBrain;
        dogBrain = new Brain(*(other.dogBrain));
    }
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() const {
    return (dogBrain);
}