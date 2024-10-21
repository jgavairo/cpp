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
        ClapTrap(); //Constructeur par defaut
        ClapTrap(const std::string& name); //Constructeur par string
        ClapTrap(const ClapTrap& other); //Constructeur de copie

        ClapTrap& operator=(const ClapTrap& other); //Operateur de copie

        virtual void attack(const std::string& target); //Fonction d'attaque
        void takeDamage(unsigned int amount); //Fonction prendre degats
        void beRepaired(unsigned int amount); //Fonction heal

        std::string getName() const; //Getter de nom
        int         getDamage() const; //Getter de damage
        ~ClapTrap(); //Destructeur
};

#endif
