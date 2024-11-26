#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

bool RPN::isNumber(char c) const
{
    return (c == '-' || c == '+' || c == '*' || c == '/');
}

bool RPN::isOperator(char c) const
{
    return (std::isdigit(c));
}

float RPN::useOperator(float a, float b, char op)
{
    switch (op)
    {
        case '-' : return a - b;
        case '+' : return a + b;
        case '*' : return a * b;
        case '/' :
            if (b == 0)
                throw std::runtime_error("Error: Division by zero.");
            return a/b;
        default : throw std::runtime_error("Error: Invalid operator");
    }
}

float RPN::calculate(const std::string& input)
{
    (void)input;
    return 0;
}