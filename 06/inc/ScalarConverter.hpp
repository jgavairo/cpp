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
    public:
        static void convert(const std::string& literal);
};

#endif