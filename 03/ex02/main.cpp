#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ScavTrap scavtrap("Scav");
    ClapTrap claptrap("Clap");
    FragTrap fragtrap("Frag");
    
    //scav attaque clap
    scavtrap.attack("Clap");

    //clap prend des degats
    claptrap.takeDamage(scavtrap.getDamage());

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

    return 0;  // Les destructeurs seront appelés à la fin du programme
}