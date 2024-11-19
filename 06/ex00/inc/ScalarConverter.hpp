#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <float.h>

#define INT_MIN -2147483648.0
#define INT_MAX 2147483647.0

class ScalarConverter
{
    private:
        ScalarConverter();
        static bool isChar(const std::string& input);
        static bool isInt(const std::string& input);
        static bool isFloat(const std::string& input);
        static bool isDouble(const std::string& input);

        static void printFromChar(char c);
        static void printFromInt(double value);
        static void printFromDecimal(double value);
    public:
        static void convert(const std::string& literal);
};

bool    is_Nan(double value);
size_t  stdlen(std::string str);
bool    is_Printable(char c);
bool    is_Digit(char c);
bool    isScientific(double value);


#endif