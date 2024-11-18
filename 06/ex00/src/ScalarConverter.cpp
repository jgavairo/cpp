#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <cctype>
#include <float.h>

#define INT_MIN -2147483648.0
#define INT_MAX 2147483647.0

bool ScalarConverter::isChar(const std::string& literal)
{
    if (literal.length() == 3 && std::isprint(literal[1]) && literal[0] == '\'' && literal[2] == '\'')
        return true;
    return false;
}

bool ScalarConverter::isInt(const std::string& literal)
{
    for (size_t i = 0; i < literal.length(); i++)
        if (!std::isdigit(literal[i]))
            return false;
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

    return d;
}

float stringToFloat(const std::string& str)
{
    if (str == "nanf")
        return std::numeric_limits<double>::quiet_NaN();
    if (str == "+inff")
        return std::numeric_limits<double>::infinity();
    if (str == "-inff")
        return -std::numeric_limits<double>::infinity();

    std::istringstream iss(str.substr(0, str.length() - 1));
    double value;
    iss >> value;
    if (iss.fail() || !iss.eof())
        throw std::runtime_error("Conversion to float failed.");
    return value; 
}

double stringToDouble(const std::string& str)
{
    if (str == "nan")
        return std::numeric_limits<double>::quiet_NaN();
    if (str == "+inf")
        return std::numeric_limits<double>::infinity();
    if (str == "-inf")
        return -std::numeric_limits<double>::infinity();

    std::istringstream iss(str);
    double value;
    iss >> value;
    if (iss.fail() || !iss.eof())
        throw std::runtime_error("Conversion to double failed");
    return value;
}

void ScalarConverter::convertFromChar(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0f" << std::endl;
}

void ScalarConverter::convertFromInt(double value)
{
    if (value >= 32 && value <= 126)
        std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
    else 
        std::cout << "Char: Impossible" << std::endl;


    if (value >= INT_MIN && value <= INT_MAX)
        std::cout << "Int: " << static_cast<int>(value) << std::endl;
    else
        std::cout << "Int: Impossible" << std::endl;


    if (value >= FLT_MIN && value <= FLT_MAX)
        std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
    else
        std::cout << "Float: Impossible" << std::endl;
    

    if (value >= DBL_MIN && value <= DBL_MAX)
        std::cout << "Double: " << value << ".0" << std::endl;
    else
        std::cout << "Double: Impossible" << std::endl;
}

void ScalarConverter::convertFromFloat(double value)
{
    if (std::isnan(value) || std::isinf(value))
    {
        std::cout << "Char: Impossible" << std::endl;
        std::cout << "Int: Impossible" << std::endl;
    }
    else
    {
        if (value >= 32 && value <= 126)
            std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
        else 
            std::cout << "Char: Impossible" << std::endl;
        if (value >= INT_MIN && value <= INT_MAX)
            std::cout << "Int: " << static_cast<int>(value) << std::endl;
        else
            std::cout << "Int: Impossible" << std::endl;
    }
    if (value >= FLT_MIN && value <= FLT_MAX)
        std::cout << "Float: " << static_cast<float>(value) << std::endl;
    else
        std::cout << "Float: Impossible" << std::endl;
    

    if (value >= DBL_MIN && value <= DBL_MAX)
        std::cout << "Double: " << value << std::endl;
    else
        std::cout << "Double: Impossible" << std::endl;
}

void ScalarConverter::convertFromDouble(double value)
{
    if (std::isnan(value) || std::isinf(value))
    {
        std::cout << "Char: Impossible" << std::endl;
        std::cout << "Int: Impossible" << std::endl;
    }
    else
    {
        if (value >= 32 && value <+ 126)
            std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
        else 
            std::cout << "Char: Impossible" << std::endl;
        std::cout << "Int: " << static_cast<int>(value) << std::endl;
    }
    std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << value << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
    if (isChar(literal))
        ScalarConverter::convertFromChar(literal[1]);
    else if (isInt(literal))
        ScalarConverter::convertFromInt(stringToDouble(literal));
    else if (isFloat(literal))
        ScalarConverter::convertFromFloat(stringToFloat(literal));
    else if (isDouble(literal))
        ScalarConverter::convertFromDouble(stringToDouble(literal));
    else
        std::cout << "This type is not recognized." << std::endl;
}