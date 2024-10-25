#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* _inventory[4];
public:
    Character();
    Character(std::string const name);
    Character(Character& const other);
    Character& operator=(Character& const other);
    std::string& const getName();
    void equip(AMateria* m);
    void unequip(int i);
    void use(int i, Character& target);
    virtual ~Character();
};

#endif