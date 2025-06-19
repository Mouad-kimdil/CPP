#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {
    std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    type = other.type;
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor has been called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        type = other.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
