#pragma once

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class AMateria {
    protected:
        std::string const &type;
    public:
        AMateria()
        AMateria( std::string const &type );
        ~AMateria();
        AMateria &operator=( const AMateria &other );

        std::string const &getType() const; // Return the materia type
        void               setType( std::string &_type );

        virtual AMateria *clone() const = 0;
        virtual void     use( ICharacter &target );
};
