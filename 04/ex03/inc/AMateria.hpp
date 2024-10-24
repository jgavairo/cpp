#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "../inc/ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(AMateria& other);
        AMateria(std::string const type);
        AMateria& operator=(AMateria& other);

        std::string& const getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        ~AMateria();
};

#endif