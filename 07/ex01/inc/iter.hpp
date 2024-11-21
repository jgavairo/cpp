#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>
#include <iostream>

template <typename T, typename Func>
void iter(T* tab, size_t lenght, Func function)
{
    for (size_t i = 0; i < lenght; i++)
        function(tab[i]);
}

template <typename T>
void printElement(const T& element)
{
    std::cout << element << " ";
}

void increment(int& num)
{
    num += 1;
}

#endif