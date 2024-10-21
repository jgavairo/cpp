#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Default";
    _healthPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    _name = name;
    _healthPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_healthPoints = other._healthPoints;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_healthPoints > 0)
    {
        if (this->_energyPoints > 0)
        {
            this->_energyPoints -= 1;
            std::cout << _name << " attack " << target << " and " << target << " lose " << _attackDamage << " hp" << std::endl;
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
            if (this->_healthPoints <= 0)
                this->_healthPoints = 0;
            std::cout << _name << " lose " << amount << " hp" << std::endl << "Now he has " << _healthPoints << " hp left" << std::endl;
            if (this->_healthPoints == 0)
                std::cout << _name << " is died" << std::endl;
        }
        else
            std::cout << "Sorry, the ClapTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "Hum.. sorry, the ClapTrap " << _name << " is dead.." << std::endl;
}

std::string ClapTrap::getName() const
{
    return(this->_name);
}

int ClapTrap::getDamage() const
{
    return (this->_attackDamage);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap is destroyed" << std::endl;
}