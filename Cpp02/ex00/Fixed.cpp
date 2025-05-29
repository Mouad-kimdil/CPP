#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ) {
    std::cout << "Copy constructor called" << std::endl;
    fixed_value = other.getRawBits();
}

Fixed   &Fixed::operator=( const Fixed &other ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other ) {
        fixed_value = other.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_value);
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed_value = raw;
}
