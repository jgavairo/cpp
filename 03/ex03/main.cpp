#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() 
{
    std::cout << "----------Trap creation by string name" << std::endl;
    ScavTrap scavtrap("Scav");
    ClapTrap claptrap("Clap");
    FragTrap fragtrap("Frag");
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "----------FragTrap creation by copy constructor" << std::endl;
    FragTrap fragtrap42(fragtrap);
    std::cout << std::endl << std::endl << std::endl;
    
    std::cout << "----------DiamondTrap creation" << std::endl;
    DiamondTrap diamond("Diamond");
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "----------basic scavtrap creation" << std::endl;
    ScavTrap tester;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "----------assignation scavtrap by operator = " << std::endl;
    tester = scavtrap;
    std::cout << std::endl << std::endl << std::endl;


    diamond.whoAmI();
    fragtrap42.highFivesGuys();
    //scav attaque clap
    scavtrap.attack(claptrap.getName());

    //clap prend des degats
    claptrap.takeDamage(scavtrap.getDamage() - 15);

    claptrap.beRepaired(20);

    fragtrap.attack(claptrap.getName());

    claptrap.takeDamage(fragtrap.getDamage());

    claptrap.attack(fragtrap.getName());

    //frag attaque scav
    fragtrap.attack(scavtrap.getName());

    //scav prend des degats
    scavtrap.takeDamage(fragtrap.getDamage());

    //scav passe en mode guardian
    scavtrap.guardGate();

    //scav attaque frag
    scavtrap.attack(fragtrap.getName());

    //frag prend des degats
    fragtrap.takeDamage(scavtrap.getDamage());

    //frag demande un high five
    fragtrap.highFivesGuys();

    tester.takeDamage(4);
    std::cout << std::endl << std::endl << std::endl;


    std::cout << "----------Closing program and destruction of all instances" << std::endl;

    return 0;  // Les destructeurs seront appelés à la fin du programme
}