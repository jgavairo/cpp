#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat basic constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat constructor is called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor is called" << std::endl;
}