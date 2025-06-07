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

bool Fixed::operator>(const Fixed &other) const {
    return (_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const {
    return (_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const {
    return (_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const {
    return (_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const {
    return (_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const {
    return (_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;

    long long product = static_cast<long long>(_value) * other.getRawBits();
    int scaled = static_cast<int>(product >> fraction);
    result.setRawBits(scaled);
    return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed fixed_result;
    if (other.getRawBits() == 0) {
        std::cerr << "Division by zero" << std::endl;
        return Fixed(0);
    }
    long long dividend = static_cast<long long>(_value) << fraction;
    int result = static_cast<int>(dividend / other.getRawBits());
    fixed_result.setRawBits(result);
    return (fixed_result);
}

Fixed   &Fixed::operator++( void ) {
    _value += 1;
    return (*this);
}

Fixed   &Fixed::operator--( void ) {
    _value -= 1;
    return (*this);
}

Fixed   Fixed::operator++( int ) {
    Fixed   tmp(*this);
    _value += 1;
    return (tmp);
}

Fixed   Fixed::operator--( int ) {
    Fixed   tmp(*this);
    _value -= 1;
    return (tmp);
}

Fixed   &Fixed::min( Fixed &a, Fixed &b ) {
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b ) {
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed   &Fixed::max( Fixed &a, Fixed &b ) {
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b ) {
    return (a.getRawBits() > b.getRawBits() ? a : b);
}
