#include "Animal.hpp"

Animal::Animal
() : type("") {
    std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const Animal &other) {
    type = other.type;
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor has been called!" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        type = other.type;
    }
    return (*this);
}

std::string Animal::getType() const {
    return type;
}
