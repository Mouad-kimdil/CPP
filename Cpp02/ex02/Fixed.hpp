#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private:
        int _value;
        static const int fraction = 8;
    public:
        Fixed ();
        Fixed ( const int int_value );
        Fixed ( const float float_value );
        Fixed( const Fixed &other );
        Fixed &operator=( const Fixed &other );
        ~Fixed();

        float toFloat( void ) const;
        int toInt( void ) const ;
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        
        Fixed   operator+(const Fixed &other ) const;
        Fixed   operator-(const Fixed &other ) const;
        Fixed   operator*(const Fixed &other ) const;
        Fixed   operator/(const Fixed &other ) const;

        Fixed   &operator++( void );
        Fixed   &operator--( void );
        Fixed   operator++( int );
        Fixed   operator--( int );

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<( std::ostream& os, const Fixed &other );
