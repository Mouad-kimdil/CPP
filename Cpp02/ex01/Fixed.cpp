#include "Fixed.hpp"

Fixed::Fixed () : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int int_value ) : _value( int_value  << fraction) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float float_value ): _value( roundf(float_value * (1 << fraction)) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed   &Fixed::operator=( const Fixed &other ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other ) {
        _value = other.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat( void ) const {
    return ((float)_value / (float)(1 << fraction));
}

int Fixed::toInt( void ) const {
    return (int)(_value >> fraction);
}

int Fixed::getRawBits( void ) const {
    return (_value);
}

void Fixed::setRawBits( int const raw ) {
    _value = raw;
}

std::ostream &operator<<( std::ostream &os, const Fixed &fixed ) {
    os << fixed.toFloat();
    return (os);
}
