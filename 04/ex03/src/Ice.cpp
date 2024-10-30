#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout << "Basic constructor of \033[36mIce\033[0m is called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    _type = other.getType();
    std::cout << "Copy constructor of \033[36mIce\033[0m is called." << std::endl;
}

AMateria* Ice::clone() const
{
    Ice *a = new Ice();
    a->_type = _type;
    return a;
}

Ice& Ice::operator=(const Ice& other)
{
    this->_type = other._type;
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "\033[36m*\033[0m shoots an ice bolt at " << target.getName() << " \033[36m*\033[0m" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor of \033[36mIce\033[0m is called." << std::endl;
}