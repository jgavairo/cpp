#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
public:
    Brain();
    Brain(const Brain& other);
    
    std::string ideas[100];

    Brain& operator=(const Brain& other);

    ~Brain();
};

#endif