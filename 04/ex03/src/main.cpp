#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/MateriaSource.hpp"
#include <iostream>

int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    Character bob("bob");

    me->use(0, bob);
    me->use(1, bob);

    delete me;
    delete src;

    return 0;
}