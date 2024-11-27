#include "RPN.hpp"

RPN::RPN() {std::cout << "Default constructor is called." << std::endl;}

RPN::~RPN() {std::cout << "Destructor is called." << std::endl;}

RPN::RPN(const RPN& other) {(void)other; std::cout << "Copy constructor is called." << std::endl;}

RPN& RPN::operator=(const RPN& other)
{
    std::cout << "Operator of copy is called." << std::endl;
    if (this != &other)
    {

    }
    return *this;
}

bool RPN::isNumber(char c) const
{
    return (std::isdigit(c));
}

bool RPN::isOperator(char c) const
{
    return (c == '-' || c == '+' || c == '*' || c == '/');
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
    std::stack<float> stack;
    
    for (size_t i = 0; i < input.length(); i++)
    {
        char c = input[i];

        if (c == ' ')
            continue ;

        if (RPN::isNumber(c))
            stack.push(c - '0');

        else if (RPN::isOperator(c))
        {
            if (stack.size() < 2)
                throw std::runtime_error("Error: Invalid expression.");
            float b = stack.top();
            stack.pop();
            float a = stack.top();
            stack.pop();
            float result = useOperator(a, b, c);
            stack.push(result);
        }
        else 
            throw std::runtime_error("Error: Invalid character in expression.");
    }
    if (stack.size() != 1)
        throw std::runtime_error("Error: Invalid expression.");  

    return stack.top();
}