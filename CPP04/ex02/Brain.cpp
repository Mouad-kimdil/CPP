#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor has been called!" << std::endl;
}

Brain::Brain( const Brain &other ) { 
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy constructor has been called!" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor has been called!" << std::endl;
}

Brain &Brain::operator=( const Brain &other ) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain assignment operator has been called!" << std::endl;
    return (*this);
}

std::string Brain::getIdea( int index ) const {
    if (index >=0 && index < 100) {
        return ((ideas[index]));
    }
    return ("");
}

void    Brain::setIdea( int index, const std::string &idea ) {
    if (index >= 0 && index < 100 ) {
        ideas[index] = idea;
    }
}
