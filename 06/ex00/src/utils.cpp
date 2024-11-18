#include "ScalarConverter.hpp"

bool is_Nan(double value)
{
    return (value != value);
}

size_t stdlen(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

bool is_Printable(char c)
{
    return (c >= 32 && c <= 126);
}

bool is_Digit(char c)
{
    return (c >= '0' && c <= '9');
}