#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        static bool isChar(const std::string& input);
        static bool isInt(const std::string& input);
        static bool isFloat(const std::string& input);
        static bool isDouble(const std::string& input);

        static void convertFromChar(char c);
        static void convertFromInt(int value);
        static void convertFromFloat(float value);
        static void convertFromDouble(double value);
    public:
        static void convert(const std::string& literal);
};

#endif