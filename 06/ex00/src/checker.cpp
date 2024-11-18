#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string& literal)
{
    if (stdlen(literal) == 3 && is_Printable(literal[1]) && literal[0] == '\'' && literal[2] == '\'')
    {
        std::cout << "is CHAR\n\n";
        return true;
    }
    return false;
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

    if (literal[literal.length() - 1] != 'f')
        return false;
    
    int symbol = 0;
    if (!isdigit(literal[0]))
    {
        if (literal[0] == '+' || literal[0] == '-')
            symbol = 1;
        else 
            return false;
    }
    std::string nbPart = literal.substr(0, literal.length() - 1);

    if (literal[nbPart.length() - 1] == '.')
        return false;

    int d = 0;

    for (size_t i = symbol; i < nbPart.length(); i++)
    {
        if (!std::isdigit(nbPart[i]))
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

    if (!std::isdigit(literal[literal.length() - 1]))
        return false;
    
    int symbol = 0;
    if (!isdigit(literal[0]))
    {
        if (literal[0] == '+' || literal[0] == '-')
            symbol = 1;
        else 
            return false;
    }

    std::string nbPart = literal.substr(0, literal.length() - 1);

    int d = 0;

    for (size_t i = symbol; i < nbPart.length(); i++)
    {
        if (!std::isdigit(nbPart[i]))
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