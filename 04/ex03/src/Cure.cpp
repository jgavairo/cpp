#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("Cure")
{

}

Cure::Cure(Cure& const other) : AMateria(other)
{
    _type = other.getType();
}

AMateria* Cure::clone() const
{
    Cure *a = new Cure();
    a->_type = _type;
    return a;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{

}