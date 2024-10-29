#include "../inc/Character.hpp"

Character::Character()
{
    _name = "notDefined";
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 8; i++)
        _onGround[i] = NULL;
    _ground = 0;
}

Character::Character(std::string const name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 8; i++)
        _onGround[i] = NULL;
    _ground = 0;
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
        for (int i = 0; i < 8; i++)
        {
            if (_onGround[i])
                delete _onGround[i];
            _onGround[i] = other._onGround[i] ? other._onGround[i]->clone() : NULL;
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
                _inventory[i] = m->clone();
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
        if (_inventory[i])
        {
            if (_ground < 8)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (_onGround[j] == NULL)
                    {
                        _onGround[j] = _inventory[i];
                        _inventory[i] = NULL;
                        _ground++;
                    }
                }
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
        if (_onGround[j])
           delete _onGround[j];
    }
}
