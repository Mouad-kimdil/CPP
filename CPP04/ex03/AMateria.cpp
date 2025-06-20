#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("") {
    std::cout << "AMateria default constructor has been called!" << std::endl;
}

AMateria::AMateria( std::string const &type ) : type(type) {
    std::cout << "AMateria parametrized constructor has been called!" << std::endl;
}

AMateria::AMateria( const AMateria &other ) : type(other.type) {
    std::cout << "AMateria copy constructor has been called!" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor has been called!" << std::endl;
}

AMateria &AMateria::operator=( const AMateria &other ) {
    if (this != &other) {
        type = other.type;
    }
    return (*this);
}

std::string const &AMateria::getType() const {
    return (type);
}

void    AMateria::setType( std::string &_type ) {
    type = _type;
}

void AMateria::use( ICharacter &target ) {
    std::cout << "AMateria " << type << " used on " << target.getName() << std::endl;
}