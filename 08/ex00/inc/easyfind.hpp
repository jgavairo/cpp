#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <exception>

template <typename T>
typename T::iterator easyfind(T&, int find);

class ValueNotFoundException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Value not found in the container.";
        }
};

#include "../src/easyfind.tpp"

#endif