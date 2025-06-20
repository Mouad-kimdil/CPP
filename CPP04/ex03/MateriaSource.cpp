#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        templates[i] = NULL;
    }
    std::cout << "MateriaSource default constructor has been called!" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &other ) {
    for (int i = 0; i < 4; i++) {
        if (other.templates[i])
            templates[i] = other.templates[i]->clone();
        else
            templates[i] = NULL;
    }
    std::cout << "MateriaSource copy constructor has been called!" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete templates[i];
    }
    std::cout << "MateriaSource destructor has been called!" << std::endl;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &other ) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            delete templates[i];
        }
        for (int i = 0; i < 4; i++) {
            if (other.templates[i])
                templates[i] = other.templates[i]->clone();
            else
                templates[i] = NULL;
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria( AMateria *m ) {
    if (!m)
        return ;
    for (int i = 0; i < 4; i++) {
        if (!templates[i]) {
            templates[i] = m->clone();
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria( std::string const &type ){
    for (int i = 0; i < 4; i++) {
        if (templates[i] && templates[i]->getType() == type) {
            return (templates[i]->clone());
        }
    }
    return (NULL);
}