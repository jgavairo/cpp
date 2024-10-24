#include "../inc/Character.hpp"

Character::Character()
{

}

Character::Character(std::string& const name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

Character::Character(Character& const other)
{
    *this = other;
}

Character& Character::operator=(Character& const other)
{
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            _inventory[i] = other._inventory[i];
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

std::string& const Character::getName()
{
    return this->_name;
}

