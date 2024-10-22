#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "empty";
    std::cout << "Brain constructed." << std::endl;   
}

Brain::Brain(const Brain& other)
{
    *this = other;
    std::cout << "Brain copied." << std::endl; 
}

Brain& Brain::operator=(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructed." << std::endl;
}