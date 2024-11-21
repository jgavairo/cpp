#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class Array
{
    private:
        T* _array;
        size_t _size;
        
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        
        Array& operator=(const Array& other);
        T& operator[](unsigned int i) const;
        
        unsigned int size() const;

        ~Array();
};

#include "../src/Array.tpp"
#endif