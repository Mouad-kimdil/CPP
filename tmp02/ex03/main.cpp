#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
    // Create a triangle with vertices at (0,0), (10,30), and (20,0)
    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);
    
    // Test points
    Point inside(10, 15);       // Should be inside
    Point outside(30, 15);      // Should be outside
    Point onEdge(10, 0);        // Should be on edge (not inside)
    Point onVertex(0, 0);       // Should be on vertex (not inside)
    
    std::cout << "Point (10,15) is " << (bsp(a, b, c, inside) ? "inside" : "outside") << " the triangle\n";
    std::cout << "Point (30,15) is " << (bsp(a, b, c, outside) ? "inside" : "outside") << " the triangle\n";
    std::cout << "Point (10,0) is " << (bsp(a, b, c, onEdge) ? "inside" : "outside") << " the triangle\n";
    std::cout << "Point (0,0) is " << (bsp(a, b, c, onVertex) ? "inside" : "outside") << " the triangle\n";
    
    // Additional test with a different triangle
    Point d(0, 0);
    Point e(0, 10);
    Point f(10, 0);
    
    Point insideSmall(2, 2);    // Should be inside
    Point outsideSmall(5, 10);  // Should be outside
    
    std::cout << "\nSecond triangle tests:\n";
    std::cout << "Point (2,2) is " << (bsp(d, e, f, insideSmall) ? "inside" : "outside") << " the triangle\n";
    std::cout << "Point (5,10) is " << (bsp(d, e, f, outsideSmall) ? "inside" : "outside") << " the triangle\n";
    
    return 0;
}
