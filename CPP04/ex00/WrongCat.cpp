#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "WrongCat";
    std::cout << "WrongCat default constructor has been called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor has been called!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor has been called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}