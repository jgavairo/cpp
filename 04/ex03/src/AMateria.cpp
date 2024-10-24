#include "../inc/AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string type)
{
    _type = type;
}

AMateria::AMateria(AMateria& other)
{
    _type = other.getType();
}


void AMateria::use(ICharacter& target)
{

}

AMateria::~AMateria()
{

}