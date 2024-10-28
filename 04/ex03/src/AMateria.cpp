#include "../inc/AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string type)
{
    _type = type;
}

AMateria::AMateria(const AMateria& other)
{
    _type = other.getType();
}

const std::string& AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{

}