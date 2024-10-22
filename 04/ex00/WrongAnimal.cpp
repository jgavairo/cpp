#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Undefined";
    std::cout << "WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal constructor is called" << std::endl;
    this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal constructor is called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

const std::string& WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongSound WrongSound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor is called" << std::endl;
}