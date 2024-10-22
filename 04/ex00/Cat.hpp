#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    protected:
        std::string type;
    public:
        Cat();
        Cat(const Cat& other);

        Cat& operator=(const Cat& other);

        void makeSound() const;

        virtual ~Cat();
};

#endif