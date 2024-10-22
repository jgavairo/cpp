#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor is called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat constructor is called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor is called" << std::endl;
}