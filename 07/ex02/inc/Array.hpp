#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
        T* _array;
        size_t _size;
        
    public:
        Array();
        Array(const unsigned int n);
        Array(const Array& other);
        
        Array& operator=(const Array& other);
        T& operator[](unsigned int i);
        
        unsigned int size();

        ~Array();
};

#include "../src/Array.tpp"
#endif