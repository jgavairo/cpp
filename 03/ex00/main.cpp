#include "ClapTrap.hpp"

int main() 
{
    ClapTrap robot1("Robot1");
    ClapTrap robot2("Robot2");

    robot1.attack(robot2.getName());
    robot2.takeDamage(robot1.getDamage());
    robot2.beRepaired(5);
    robot2.attack(robot1.getName());

    return 0;
}