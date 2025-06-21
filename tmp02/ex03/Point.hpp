#pragma once

#include "Fixed.hpp"

class Point {
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point( const float nb1, const float nb2 );
        Point( const Point &other );
        Point   &operator=( const Point &other );
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
};