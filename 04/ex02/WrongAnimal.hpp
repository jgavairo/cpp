#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& other);

        WrongAnimal& operator=(const WrongAnimal& other);

        void makeSound() const;
        const std::string& getType() const;

        virtual ~WrongAnimal();
};

#endif