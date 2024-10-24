#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat basic constructor is called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->brain = new Brain();
    std::cout << "Cat constructor is called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        delete this->brain;
        this->_type = other._type;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

std::string Cat::getIdea(const int i)
{
    if (i >= 0 && i < 100)
        return this->brain->ideas[i];
    return NULL ;
}

void Cat::setIdea(const std::string idea, const int i)
{
    if (i >= 0 && i < 100)
        this->brain->ideas[i] = idea;
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