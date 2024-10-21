#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap("Scav");
    ClapTrap claptrap("Clap");
    
    // Appeler la méthode attack
    scavtrap.attack("Clap");
    claptrap.takeDamage(scavtrap.getDamage());

    // Appeler la méthode guardGate
    scavtrap.guardGate();

    return 0;  // Les destructeurs seront appelés à la fin du programme
}