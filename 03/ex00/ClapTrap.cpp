#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "noName";
    _healthPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _healthPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_healthPoints > 0)
    {
        if (this->_energyPoints > 0)
        {
            this->_energyPoints -= 1;
            std::cout << _name << " attack " << target << " and " << target << " lose " << _attackDamage << " hp" << std::endl;
            // appeler takedamage chez target
        }
        else
            std::cout << "Sorry, the ClapTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "Hum.. sorry, the ClapTrap " << _name << " is dead.." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_healthPoints > 0)
    {
        if (this->_energyPoints > 0)
        {
            this->_energyPoints -= 1;
            this->_healthPoints += amount;
            std::cout << _name << " to recover " << amount << " hp" << std::endl;
        }
        else
            std::cout << "Sorry, the ClapTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "Hum.. sorry, the ClapTrap " << _name << " is dead.." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_healthPoints > 0)
    {
        if (this->_energyPoints > 0)
        {
            this->_energyPoints -= 1;
            this->_healthPoints -= amount;
            std::cout << _name << " lose " << amount << " hp" << std::endl << "Now he has " << _healthPoints << " hp left" << std::endl;
            if (this->_healthPoints <= 0)
                std::cout << _name << " is died" << std::endl;
        }
        else
            std::cout << "Sorry, the ClapTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "Hum.. sorry, the ClapTrap " << _name << " is dead.." << std::endl;
}

ClapTrap::~ClapTrap()
{
}