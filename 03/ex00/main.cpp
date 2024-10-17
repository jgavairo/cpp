#include "ClapTrap.hpp"

int main() 
{
    ClapTrap robot1("Robot1");
    ClapTrap robot2;

    // Test de la fonction attack
    robot1.attack("robot2");  // Robot1 attaque Robot2
    robot2.beRepaired(5);   // Robot2 se répare
    robot2.attack("robot1");  // Robot2 attaque Robot1

    return 0;
}