#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_name = "Default";
    this->_healthPoints = FragTrap::_healthPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name << "is created. ✅" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    this->_name = name;
    this->_healthPoints = FragTrap::_healthPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name << " is created. ✅" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    *this = other;
    std::cout << "Diamond copy constructor called.✅" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_healthPoints = other._healthPoints;
        std::cout << "Diamondtrap copy operator called.✅" << std::endl;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    const std::string CYAN = "\033[36m";
    const std::string RESET = "\033[0m";
    std::cout << CYAN << "[SC] My name is " << _name << ", and my ClapTrap name is " << ClapTrap::_name << "!" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[❌] DiamondTrap " << _name << " is destroyed." << std::endl;
}