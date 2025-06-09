#include "Point.hpp"

Fixed calculate_side(Point const point, Point const pointX, Point const pointY) {
    Fixed side;

    side = (pointY.getX() - pointX.getX()) * (point.getY() - pointX.getY())
           - (point.getX() - pointX.getX()) * (pointY.getY() - pointX.getY());
    return (side);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed sideAB = calculate_side(point, a, b);
    Fixed sideBC = calculate_side(point, b, c);
    Fixed sideCA = calculate_side(point, c, a);
    
    if (sideAB == 0 || sideBC == 0 || sideCA == 0)
        return (false);
    
    bool positive = (sideAB > 0 && sideBC > 0 && sideCA > 0);
    bool negative = (sideAB < 0 && sideBC < 0 && sideCA < 0);
    
    return (positive || negative);
}
