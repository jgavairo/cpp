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
    public:
        static void convert(const std::string& literal);
};

bool    is_Nan(double value);
size_t  stdlen(std::string str);
bool    is_Printable(char c);
bool    is_Digit(char c);
bool    isScientific(double value);

bool    isChar(const std::string& input);
bool    isInt(const std::string& input);
bool    isFloat(const std::string& input);
bool    isDouble(const std::string& input);

void    printFromChar(char c);
void    printFromInt(double value);
void    printFromDecimal(double value);

float   stringToFloat(const std::string& str);
double  stringToDouble(const std::string& str);


#endif