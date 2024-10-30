#include "AMateria.hpp"

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

AMateria& AMateria::operator=(AMateria& other)
{
    this->_type = other._type;
    return *this;
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