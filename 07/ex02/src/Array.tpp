#include "../inc/Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
    
}

template <typename T>
Array<T>::Array(const unsigned int n) : _array(new T[n]), _size(n)
{

}

template <typename T>
Array<T>::Array(const Array& other) : _array(NULL), _size(0)
{
    *this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] _array;
        _size = other.size();
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::out_of_range("index is out of range");
    return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}
