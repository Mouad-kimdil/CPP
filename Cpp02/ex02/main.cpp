#include "Fixed.hpp"
#include <iostream>

// int main(void) {
//     // Test constructors
//     Fixed a;
//     Fixed const b(10);
//     Fixed const c(42.42f);
//     Fixed const d(b);
    
//     a = Fixed(1234.4321f);
    
//     // Test comparison operators
//     std::cout << "\n=== Comparison Operators ===\n";
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "a > b: " << ((a > b) == 1 ? "True" : "False") << std::endl;
//     std::cout << "a < b: " << ((a < b) == 1 ? "True" : "False") << std::endl;
//     std::cout << "a >= b: " << ((a >= b) == 1 ? "True" : "False") << std::endl;
//     std::cout << "a <= b: " << ((a <= b) == 1 ? "True" : "False") << std::endl;
//     std::cout << "a == b: " << ((a == b) == 1 ? "True" : "False") << std::endl;
//     std::cout << "a != b: " << ((a != b) == 1 ? "True" : "False") << std::endl;
    
//     // Test arithmetic operators
//     std::cout << "\n=== Arithmetic Operators ===\n";
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "a + b = " << (a + b) << std::endl;
//     std::cout << "a - b = " << (a - b) << std::endl;
//     std::cout << "a * b = " << (a * b) << std::endl;
//     std::cout << "a / b = " << (a / b) << std::endl;
    
//     // Test increment/decrement operators
//     std::cout << "\n=== Increment/Decrement Operators ===\n";
    
//     // Pre-increment
//     Fixed e(5.5f);
//     std::cout << "e = " << e << std::endl;
//     std::cout << "++e = " << ++e << std::endl;
//     std::cout << "e = " << e << std::endl;
    
//     // Post-increment
//     Fixed f(5.5f);
//     std::cout << "f = " << f << std::endl;
//     std::cout << "f++ = " << f++ << std::endl;
//     std::cout << "f = " << f << std::endl;
    
//     // Pre-decrement
//     Fixed g(5.5f);
//     std::cout << "g = " << g << std::endl;
//     std::cout << "--g = " << --g << std::endl;
//     std::cout << "g = " << g << std::endl;
    
//     // Post-decrement
//     Fixed h(5.5f);
//     std::cout << "h = " << h << std::endl;
//     std::cout << "h-- = " << h-- << std::endl;
//     std::cout << "h = " << h << std::endl;
    
//     // Test min/max functions with non-const objects
//     std::cout << "\n=== Min/Max Functions (non-const) ===\n";
//     Fixed i(8.8f);
//     Fixed j(15.2f);
//     std::cout << "i = " << i << ", j = " << j << std::endl;
//     std::cout << "min(i, j) = " << Fixed::min(i, j) << std::endl;
//     std::cout << "max(i, j) = " << Fixed::max(i, j) << std::endl;
    
//     // Test min/max functions with const objects
//     std::cout << "\n=== Min/Max Functions (const) ===\n";
//     const Fixed k(42.42f);
//     const Fixed l(21.21f);
//     std::cout << "k = " << k << ", l = " << l << std::endl;
//     std::cout << "min(k, l) = " << Fixed::min(k, l) << std::endl;
//     std::cout << "max(k, l) = " << Fixed::max(k, l) << std::endl;
    
//     // Test min/max with equal values
//     std::cout << "\n=== Min/Max with Equal Values ===\n";
//     Fixed m(100.0f);
//     Fixed n(100.0f);
//     std::cout << "m = " << m << ", n = " << n << std::endl;
//     std::cout << "min(m, n) = " << Fixed::min(m, n) << std::endl;
//     std::cout << "max(m, n) = " << Fixed::max(m, n) << std::endl;
    
//     return 0;
// }

int main( void ) {
    Fixed           a;
    Fixed const     b( Fixed( 5.05f) * Fixed( 2) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return (0);
}