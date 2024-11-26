#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <stdexcept>

class RPN
{
    private:
        bool isOperator(char c) const;
        bool isNumber(char c) const;

    public:
        RPN();
        ~RPN();

        float useOperator(float a, float b, char op);
        float calculate(const std::string& input);
};

#endif