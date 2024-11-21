#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& container, int find)
{
    typename T::iterator it = std::find(container.begin(), container.end(), find);
    if (it == container.end())
        throw ValueNotFoundException();
    return it;
}