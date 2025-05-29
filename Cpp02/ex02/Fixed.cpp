#include "Fixed.hpp"

Fixed::Fixed () : _value(0) {
}

Fixed::Fixed( const int int_value ) : _value( int_value  << fraction) {
}

Fixed::Fixed( const float float_value ): _value( roundf(float_value * (1 << fraction)) ) {
}

Fixed::Fixed( const Fixed &other ) {
    *this = other;
}

Fixed   &Fixed::operator=( const Fixed &other ) {
    if (this != &other ) {
        _value = other.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed() {
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

bool    operator>( const Fixed &c1, const Fixed &c2 ) {
    return (c1.getRawBits() > c1.getRawBits());
}

bool    operator<( const Fixed &c1, const Fixed &c2 ) {
    return (c1.getRawBits() < c1.getRawBits());
}

bool    operator>=( const Fixed &c1, const Fixed &c2 ) {
    return (c1.getRawBits() >= c1.getRawBits());
}

bool    operator<=( const Fixed &c1, const Fixed &c2 ) {
    return (c1.getRawBits() <= c1.getRawBits());
}

bool    operator==( const Fixed &c1, const Fixed &c2 ) {
    return (c1.getRawBits() == c2.getRawBits());
}

bool    operator!=( const Fixed &c1, const Fixed &c2 ) {
    return (c1.getRawBits() != c2.getRawBits());
}