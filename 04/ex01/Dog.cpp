#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog basic constructor is called" << std::endl;
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

std::string Dog::getIdea(const int i)
{
    return this->brain->ideas[i];
}

void Dog::setIdea(const std::string idea, const int i)
{
    if (i >= 0 && i < 100)
        this->brain->ideas[i] = idea;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor is called" << std::endl;
}