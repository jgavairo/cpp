#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    _name = "Default";
    _healthPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called.✅" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _name = name;
    _healthPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " has been created.✅" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;
    std::cout << "ScavTrap copy constructor called.✅" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_healthPoints = other._healthPoints;
        std::cout << "ScavTrap copy operator called.✅" << std::endl;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_healthPoints > 0)
    {
        if (this->_energyPoints > 0)
        {
            this->_energyPoints -= 1;
            std::cout << "[💥] " << _name << " attack " << target << " and " << target << " lose " << _attackDamage << " hp" << std::endl;
        }
        else
            std::cout << "[🔋] Sorry, the ScavTrap " << _name << " has no energy." << std::endl;
    }
    else 
        std::cout << "[💀] Hum.. sorry, the ScavTrap " << _name << " is dead.." << std::endl;
}

void ScavTrap::guardGate()
{
    const std::string RED = "\033[31m";
    const std::string RESET = "\033[0m";
    std::cout << RED << "[SC] ScavTrap " << _name << " is now in Gatekeeper mode!" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[❌] ScavTrap " << _name << " has been destructed" << std::endl;
}