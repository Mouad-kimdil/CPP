#include "Cat.hpp"

Cat::Cat() : Animal() {
    catBrain = new Brain();
    type = "Cat";
    std::cout << "Cat default constructor has been called!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    catBrain = new Brain(*(other.catBrain));

    std::cout << "Cat copy constructor has been called!" << std::endl;
}

Cat::~Cat() {
    delete catBrain;
    std::cout << "Cat destructor has been called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete catBrain;
        catBrain = new Brain(*(other.catBrain));
    }
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const {
    return (catBrain);
}