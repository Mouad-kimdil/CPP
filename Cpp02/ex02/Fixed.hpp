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
};

std::ostream &operator<<( std::ostream& os, const Fixed &other );
bool    operator>( const Fixed &c1, const Fixed &c2 );
bool    operator<( const Fixed &c1, const Fixed &c2 );
bool    operator>=( const Fixed &c1, const Fixed &c2 );
bool    operator<=( const Fixed &c1, const Fixed &c2 );
bool    operator==( const Fixed &c1, const Fixed &c2 );
bool    operator!=( const Fixed &c1, const Fixed &c2 );
