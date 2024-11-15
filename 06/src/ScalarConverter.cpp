#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <cctype>


bool ScalarConverter::isChar(const std::string& literal)
{
    if (literal.length() == 3 && std::isprint(literal[1]) && literal[0] == '\'' && literal[2] == '\'')
        return true;
    return false;
}

bool ScalarConverter::isInt(const std::string& literal)
{
    std::istringstream iss(literal);
    int value;
    iss >> value;
    if (!iss.fail() && iss.eof())
        return true;
    return false;
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

    return true;
}

// bool ScalarConverter::isDouble(const std::string& literal)
// {
//     if (literal == "+inf" || literal == "-inf" || literal == "nan")
//         return true;
//     try
//     {
//         double value = std::stod(literal);
//     }
//     catch(const std::invalid_argument&)
//     {
//         return false;
//     }
//     catch (const std::out_of_range)
//     {
//         return false;
//     }
//     return true;
// }

void ScalarConverter::convert(const std::string& literal)
{
    if (isChar(literal))
        std::cout << "is a char !" << std::endl;
    if (isInt(literal))
        std::cout << "is a int !" << std::endl;
    if (isFloat(literal))
        std::cout << "is a float !" << std::endl;
    // if (isDouble(literal))
    //     std::cout << "is a double !" << std::endl;
}