#pragma once

#include <iostream>
#include <string>

class ICharacter;

class AMateria {
    protected:
        std::string type;
    public:
        AMateria();
        AMateria( std::string const &type );
        AMateria( const AMateria &other );
        virtual ~AMateria();
        AMateria &operator=( const AMateria &other );

        std::string const &getType() const; // Return the materia type
        void               setType( std::string &_type );

        virtual AMateria *clone() const = 0;
        virtual void     use( ICharacter &target );
};
