#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor is called" << std::endl;
    this->_type = "Undefined";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor is called" << std::endl;
    this->_type = type;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal constructor is called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

const std::string& Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{

}

Animal::~Animal()
{
    std::cout << "Animal destructor is called" << std::endl;
}