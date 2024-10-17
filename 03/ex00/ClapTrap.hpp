#include<iostream>

class ClapTrap
{
private:
    std::string _name;
    int         _healthPoints;
    int         _energyPoints;
    int         _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};
