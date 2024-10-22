#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat basic constructor is called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat constructor is called" << std::endl;
    *this = other;
}

std::string Cat::getIdea(const int i)
{
    return this->brain->ideas[i];
}

void Cat::setIdea(const std::string idea, const int i)
{
    if (i >= 0 && i < 100)
        this->brain->ideas[i] = idea;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
        for (int i = 0; i < 100; i++)
            this->brain->ideas[i] = other.brain->ideas[i];
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor is called" << std::endl;
}