#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Basic constructor of \033[35mCure\033[0m is called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    _type = other.getType();
    std::cout << "Copy constructor of \033[35mCure\033[0m is called." << std::endl;
}

AMateria* Cure::clone() const
{
    Cure *a = new Cure();
    a->_type = _type;
    return a;
}

void Cure::use(ICharacter& target)
{
    std::cout << "\033[35m*\033[0m heals " << target.getName() << "'s wounds \033[35m*\033[0m" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor of \033[35mCure\033[0m is called." << std::endl;
}