#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal)
{
    if (isChar(literal))
        printFromChar(literal[1]);
    else if (isInt(literal))
        printFromInt(stringToDouble(literal));
    else if (isFloat(literal))
        printFromDecimal(stringToFloat(literal));
    else if (isDouble(literal))
        printFromDecimal(stringToDouble(literal));
    else
        std::cout << "This type is not recognized." << std::endl;
}