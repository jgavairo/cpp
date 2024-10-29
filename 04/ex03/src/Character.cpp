#include "Character.hpp"

Character::Character()
{
    _name = "notDefined";
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string const name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& other)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Bonsoie2" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else _inventory[i] = NULL;
        }
    }
    return (*this);
}


void Character::use(int i, ICharacter& target)
{
    if (i >= 0 && i < 4 && _inventory[i])
        _inventory[i]->use(target);
}

void Character::equip(AMateria* m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!_inventory[i])
            {
                _inventory[i] = m;
                std::cout << _inventory[i]->getType() << " is equiped at " << i << std::endl;
                break ;
            }
        }
    }
}

void Character::unequip(int i)
{
    if (i >= 0 && i < 4)
    {
        _inventory[i] = NULL;
    }
}

const std::string& Character::getName()
{
    return this->_name;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}
