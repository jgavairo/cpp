#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor is called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog constructor is called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor is called" << std::endl;
}