#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

class Serializer
{
    private:
        Serializer();
        ~Serializer();
    public:
       static unsigned long int serialize (Data* ptr);
       static Data* deserialize(unsigned long int raw);
};

#endif