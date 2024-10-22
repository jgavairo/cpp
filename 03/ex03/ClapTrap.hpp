#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _healthPoints;
        int         _energyPoints;
        int         _attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);

        ClapTrap& operator=(const ClapTrap& other);

        virtual void attack(const std::string& target);
        void takeDamage(const unsigned int amount);
        void beRepaired(const unsigned int amount);

        std::string getName() const;
        int         getDamage() const;
        ~ClapTrap();
};

#endif
