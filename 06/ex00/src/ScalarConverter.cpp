#include "ScalarConverter.hpp"

float stringToFloat(const std::string& str)
{
    if (str == "nanf")
        return (0.0 / 0.0);
    if (str == "+inff")
        return (1.0 / 0.0);
    if (str == "-inff")
        return (-1.0 / 0.0);

    char* end;

    double value = std::strtod(&str[0], &end);
    return value;
}

double stringToDouble(const std::string& str)
{
    if (str == "nan")
        return (0.0 / 0.0);
    if (str == "+inf")
        return (1.0 / 0.0);
    if (str == "-inf")
        return (-1.0 / 0.0);

    char* end;

    double value = std::strtod(&str[0], &end);
    return value;
}

void ScalarConverter::printFromChar(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::printFromInt(double value)
{
    if (value <= 127)
    {
        if (value < 32 || value == 127)
            std::cout << "Char: non displayable" << std::endl;
        else
        std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
    }
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

void ScalarConverter::printFromDecimal(double value)
{
    if (value == 1.0 / 0.0 || value == -1.0 / 0.0 || is_Nan(value))
    {
        std::cout << "Char: Impossible" << std::endl;
        std::cout << "Int: Impossible" << std::endl;
        if (value == 1.0 / 0.0)
        {
            std::cout << "Float: +inff" << std::endl;
            std::cout << "Double: +inf" << std::endl;
        }
        else if (value == -1.0 / 0.0)
        {
            std::cout << "Float: -inff" << std::endl;
            std::cout << "Double: -inf" << std::endl;
        }
        else if (is_Nan(value))
        {
            std::cout << "Float: nanf" << std::endl;
            std::cout << "Double: nan" << std::endl;
        }
    }
    else
    {
        if (value >= 0 && value <= 127)
        {
            if (value < 32 || value == 127)
                std::cout << "Char: non displayable" << std::endl;
            else
            std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
        }
        else
        std::cout << "Char: Impossible" << std::endl;


        if (value >= INT_MIN && value <= INT_MAX)
            std::cout << "Int: " << static_cast<int>(value) << std::endl;
        else
            std::cout << "Int: Impossible" << std::endl;


        if (value >= -FLT_MAX && value <= FLT_MAX)
        {
            if (value == static_cast<int>(value))
                std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
            else
                std::cout << "Float: " << static_cast<float>(value) << 'f' << std::endl;
        }
        else
            std::cout << "Float: Impossible" << std::endl;
        

        if (value >= -DBL_MAX && value <= DBL_MAX)
        {
            if (value == static_cast<int>(value))
                std::cout << "Double: " << value << ".0" << std::endl;
            else
                std::cout << "Double: " << value << std::endl;
        }
        else
            std::cout << "Double: Impossible" << std::endl;
    }
}

void ScalarConverter::convert(const std::string& literal)
{
    if (isChar(literal))
        ScalarConverter::printFromChar(literal[1]);
    else if (isInt(literal))
        ScalarConverter::printFromInt(stringToDouble(literal));
    else if (isFloat(literal))
        ScalarConverter::printFromDecimal(stringToFloat(literal));
    else if (isDouble(literal))
        ScalarConverter::printFromDecimal(stringToDouble(literal));
    else
        std::cout << "This type is not recognized." << std::endl;
}