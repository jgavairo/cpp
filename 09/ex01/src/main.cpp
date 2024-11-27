#include "RPN.hpp"

int main(int argc, char**argv)
{
    if (argc != 2)
        return (std::cout << "Error: Invalid input." << std::endl, -1);
    try 
    {
        RPN rpn;
        std::cout << rpn.calculate(argv[1]) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
