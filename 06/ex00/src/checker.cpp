#include "ScalarConverter.hpp"

bool isScientific(double value)
{
    if (value == 0.0)
        return true;

    double absolute = (value < 0) ? -value : value;
    
    if (absolute >= 1e6 || absolute < 1e-6)
        return true;
    
    return false;
}

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

bool isChar(const std::string& literal)
{
    if (stdlen(literal) == 3 && is_Printable(literal[1]) && literal[0] == '\'' && literal[2] == '\'')
        return true;
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


bool isInt(const std::string& literal)
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
    return true;
}

bool isFloat(const std::string& literal)
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
    return d;
}

bool isDouble(const std::string& literal)
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
    return d;
}

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

void printFromChar(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void printFromInt(double value)
{
    if (value <= 127 && value >= 0)
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
        if (!isScientific(value) || value == 0)
            std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
        else
            std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
    }
    else
        std::cout << "Float: Impossible" << std::endl;
    

    if (value > -DBL_MAX && value <= DBL_MAX)
    {
        if (!isScientific(value) || value == 0)
            std::cout << "Double: " << value << ".0" << std::endl;
        else
            std::cout << "Double: " << value << std::endl;
    }
    else
        std::cout << "Double: Impossible" << std::endl;
}

void printFromDecimal(double value)
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
            if (isScientific(value) && value != static_cast<long long int>(value))
                std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
            else if (value != static_cast<long long int>(value))
                std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
            else
                std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
        }
        else
            std::cout << "Float: Impossible" << std::endl;
        

        if (value >= -DBL_MAX && value <= DBL_MAX)
        {
            if (isScientific(value) && value != static_cast<long long int>(value))
                std::cout << "Double: " << value << std::endl;
            else if (value != static_cast<long long int>(value))
                std::cout << "Double: " << value << std::endl;
            else
                std::cout << "Double: " << value << ".0" << std::endl;
        }
        else
            std::cout << "Double: Impossible" << std::endl;
    }
}