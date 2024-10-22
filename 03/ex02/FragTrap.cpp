#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
    _name = "Default";
    _healthPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called.✅" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _name = name;
    _healthPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " has been created✅" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other;
    std::cout << "FragTrap copy constructor called.✅" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_healthPoints = other._healthPoints;
        std::cout << "FragTrap copy operator called.✅" << std::endl;
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
            std::cout << "[💥] " << _name << " attack " << target << " and " << target << " lose " << _attackDamage << " hp" << std::endl;
        }
        else
            std::cout << "[🔋] Sorry, the FragTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "[💀] Hum.. sorry, the FragTrap " << _name << " is dead.." << std::endl;
}

void FragTrap::highFivesGuys()
{
    const std::string RED = "\033[31m";
    const std::string RESET = "\033[0m";
    std::cout << RED << "[SC] FragTrap " << _name << " is enthusiastically asking for a high five!" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "[❌] FragTrap " << _name << " has been destructed" << std::endl;
}