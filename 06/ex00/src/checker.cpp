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

bool ScalarConverter::isChar(const std::string& literal)
{
    if (stdlen(literal) == 3 && is_Printable(literal[1]) && literal[0] == '\'' && literal[2] == '\'')
    {
        std::cout << "is CHAR\n\n";
        return true;
    }
    return false;
}

std::string removeLast(std::string str)
{
    size_t i = 0;
    while (i < (stdlen(str) - 1))
        i++;
    str[i] = '\0';
    return str;
}


bool ScalarConverter::isInt(const std::string& literal)
{
    size_t symbol = 0;

    if (!is_Digit(literal[0]))
    {
        if (literal[0] != '-' && literal[0] != '+')
            return false;
        symbol = 1;
    }
    for (size_t i = symbol; literal[i]; i++)
    {
        if (!is_Digit(literal[i]))
            return false;

    }
    std::cout << "is INT\n\n";
    return true;
}

bool ScalarConverter::isFloat(const std::string& literal)
{
    if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        return true;

    if (literal[stdlen(literal) - 1] != 'f')
        return false;
    
    int symbol = 0;
    if (!is_Digit(literal[0]))
    {
        if (literal[0] == '+' || literal[0] == '-')
            symbol = 1;
        else 
            return false;
    }
    std::string nbPart = removeLast(literal);

    if (nbPart[stdlen(nbPart) - 1] == '.')
        return false;

    int d = 0;

    for (size_t i = symbol; i < stdlen(nbPart); i++)
    {
        if (!is_Digit(nbPart[i]))
        {
            if (nbPart[i] == '.')
            {
                if (d == 0)
                    d = 1;
                else
                    return false;
            }
            else 
                return false;
        }
    }
    if (d)
        std::cout << "is FLOAT\n\n";
    return d;
}

bool ScalarConverter::isDouble(const std::string& literal)
{
    if (literal == "-inf" || literal == "+inf" || literal == "nan")
        return true;

    if (!is_Digit(literal[stdlen(literal) - 1]))
        return false;
    
    int symbol = 0;
    if (!isdigit(literal[0]))
    {
        if (literal[0] == '+' || literal[0] == '-')
            symbol = 1;
        else 
            return false;
    }

    std::string nbPart = removeLast(literal);

    int d = 0;

    for (size_t i = symbol; i < stdlen(nbPart); i++)
    {
        if (!is_Digit(nbPart[i]))
        {
            if (nbPart[i] == '.')
            {
                if (d == 0)
                    d = 1;
                else
                    return false;
            }
            else 
                return false;
        }
    }

    if (d)
        std::cout << "is DOUBLE\n\n";
    return d;
}