#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/MateriaSource.hpp"
#include <iostream>

int main() 
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << std::endl << "MateriaSource is operational" << std::endl << std::endl;

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("Ice");
    me->equip(tmp);
    delete tmp;


    Character bob("bob");

    me->use(0, bob);

    tmp = src->createMateria("Cure");
    bob.equip(tmp);
    delete tmp;
    tmp = src->createMateria("Cure");
    bob.equip(tmp);
    delete tmp;
    tmp = src->createMateria("Cure");
    bob.equip(tmp);
    delete tmp;
    tmp = src->createMateria("Cure");
    bob.equip(tmp);
    delete tmp;

    tmp = src->createMateria("Ice");
    bob.equip(tmp);
    bob.use(0, bob);
    delete tmp;

    bob.unequip(2);
    
    tmp = src->createMateria("Ice");
    bob.equip(tmp);
    delete tmp;

    Character rayane = bob;

    rayane.use(1, bob);

    delete me;
    delete src;

    return 0;
}