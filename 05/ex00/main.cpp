#include "Bureaucrat.hpp"

int main() 
{
    try 
    {
        Bureaucrat b("Alice", 210);
        std::cout << b << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Erreur : " << e.what() << std::endl;//ne pas chnager
    }
    
}