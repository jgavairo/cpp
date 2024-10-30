#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        std::string type;
        Brain* brain; 
    public:
        Cat();
        Cat(const Cat& other);

        Cat& operator=(const Cat& other);
        std::string getIdea(const int i);
        void setIdea(const std::string idea, const int i);

        void makeSound() const;

        virtual ~Cat();
};

#endif