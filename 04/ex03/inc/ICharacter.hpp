#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include "../inc/AMateria.hpp"

class ICharacter 
{
    public:
        virtual ~ICharacter() {}
        virtual std::string& const getName() = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, Character& target) = 0;
};

#endif