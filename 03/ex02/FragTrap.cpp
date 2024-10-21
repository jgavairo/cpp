#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
    _name = "Default";
    _healthPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = "" + name;
    _healthPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

void FragTrap::attack(const std::string& target)
{
    if (this->_healthPoints > 0)
    {
        if (this->_energyPoints > 0)
        {
            this->_energyPoints -= 1;
            std::cout << _name << " attack " << target << " and " << target << " lose " << _attackDamage << " hp" << std::endl;
        }
        else
            std::cout << "Sorry, the FragTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "Hum.. sorry, the FragTrap " << _name << " is dead.." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " is enthusiastically asking for a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destructed" << std::endl;
}