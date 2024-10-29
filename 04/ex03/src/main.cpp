#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
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

    Character bob("bob");

    me->use(0, bob);

    tmp = src->createMateria("Cure");
    bob.equip(tmp);

    tmp = src->createMateria("Cure");
    bob.equip(tmp);

    tmp = src->createMateria("Cure");
    bob.equip(tmp);
    AMateria* tt = tmp;

    tmp = src->createMateria("Cure");
    bob.equip(tmp);


    tmp = src->createMateria("Ice");
    bob.equip(tmp);
    delete tmp;

    bob.use(0, bob);


    bob.unequip(2);
    delete tt;

    tmp = src->createMateria("Ice");
    bob.equip(tmp);

    Character rayane = bob;

    rayane.use(1, *me);

    delete me;
    delete src;

    return 0;
}