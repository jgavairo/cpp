#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(Ice& const other) : AMateria(other)
{
    _type = other.getType();
}

AMateria* Ice::clone() const
{
    Ice *a = new Ice();
    a->_type = _type;
    return a;
}

void Ice::use(Character& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{

}