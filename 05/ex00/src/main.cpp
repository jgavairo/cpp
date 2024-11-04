#include "Bureaucrat.hpp"

int main() 
{
    std::cout << "--try create new bureaucrat grade 110--" << std::endl;
    try 
    {
        Bureaucrat b("Alice", 110);
        std::cout << b << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--try create new bureaucrat grade 160--" << std::endl;
    try 
    {
        Bureaucrat b("Alice", 160);
        std::cout << b << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--try create new bureaucrat grade 0--" << std::endl;
    try 
    {
        Bureaucrat b("Alice", 0);
        std::cout << b << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}