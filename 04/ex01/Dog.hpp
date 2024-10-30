#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        std::string type;
        Brain* brain; 
    public:
        Dog();
        Dog(const Dog& other);

        Dog& operator=(const Dog& other);
        std::string getIdea(const int i);
        void setIdea(const std::string idea, const int i);

        void makeSound() const;

        virtual ~Dog();
};

#endif