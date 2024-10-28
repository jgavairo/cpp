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
        AMateria(const AMateria& other);
        AMateria(const std::string type);
        AMateria& operator=(AMateria& other);

        const std::string& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        virtual ~AMateria();
};

#endif