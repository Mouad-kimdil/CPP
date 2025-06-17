#pragma once

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal( const Animal &other );
        ~Animal();
        Animal &operator=( const Aminal &other );

        void    makeSound();
};
