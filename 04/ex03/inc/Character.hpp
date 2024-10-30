#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* _inventory[4];
public:
    Character();
    Character(std::string const name);
    Character(const Character& other);

    Character& operator=(const Character& other);

    const std::string& getName();
    void equip(AMateria* m);
    void unequip(int i);
    void use(int i, ICharacter& target);
    
    ~Character();
};

#endif