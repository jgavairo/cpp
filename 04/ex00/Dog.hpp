#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    protected:
        std::string type;
    public:
        Dog();
        Dog(const Dog& other);

        Dog& operator=(const Dog& other);

        void makeSound() const;

        virtual ~Dog();
};

#endif