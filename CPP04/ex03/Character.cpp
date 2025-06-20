#include "Character.hpp"

Character::Character() : name("default") {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character( std::string const &name ) : name(name) {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    std::cout << "Character parameterized constructor called" << std::endl;
}

Character::Character( const Character &other ) : name(other.name) {
    for (int i = 0; i < 4; i++) {
        if (other.inventory[i]) {
            inventory[i] = other.inventory[i]->clone();
        }
        else {
            inventory[i] = NULL;
        }
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        delete inventory[i];
    }
    std::cout << "Character destructor called" << std::endl;
}

Character   &Character::operator=( const Character &other ) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; i++) {
            delete inventory[i];
        }
        for (int i = 0; i < 4; i++) {
            if (other.inventory[i]) {
                inventory[i] = other.inventory[i]->clone();
            }
            else {
                inventory[i] = NULL;
            }
        }
    }
    return (*this);
}

std::string const &Character::getName() const {
    return (name);
}

void Character::equip( AMateria *m ) {
    if (!m)
        return ;
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m;
            break ;
        }
    }
}

void    Character::unequip( int idx ) {
    if (idx >= 0 && idx < 4) {
        inventory[idx] = NULL;
    }
}

void    Character::use( int idx, ICharacter &target ) {
    if (idx >= 0 && idx < 4 && inventory[idx]) {
        inventory[idx]->use(target);
    }
}