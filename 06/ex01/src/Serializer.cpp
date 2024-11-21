#include "Serializer.hpp"

unsigned long int Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<unsigned long int>(ptr);
}

Data* Serializer::deserialize(unsigned long int raw)
{
    return reinterpret_cast<Data*>(raw);
}