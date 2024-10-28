#include "../inc/Character.hpp"

AMateria* onGround[4];
int ground = 0;

Character::Character()
{

}

Character::Character(std::string const name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& other)
{
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            _inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
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
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            std::cout << m->getType() << " is equiped at " << i << std::endl;
            break ;
        }
    }
}

void Character::unequip(int i)
{
    if (i >= 0 && i < 4)
    {
        if (_inventory[i])
        {
            if (ground < 4)
            {
                onGround[ground] = _inventory[i];
                ground++;
                _inventory[i] = NULL;
            }
            else
                std::cout << "Sorry, cannot unequip, the ground if full." << std::endl;
        }
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
    for (int j = 0; j < 4; j++)
    {
        if (onGround[j])
            onGround[j]->~AMateria();
    }
}
