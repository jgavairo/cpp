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

    //----------------------------------------


    std::cout << "--try create a new form grade default" << std::endl;
    try
    {
        Form form1;
        std::cout << "For sign this form, we need a grade " << form1.getForSign() << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "--try create a new form grade default" << std::endl;
    try
    {
        Form form1;
        std::cout << "For sign this form, we need a grade " << form1.getForSign() << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "--try create a new form grade 160" << std::endl;
    try
    {
        Form form160("Noob form", 160, 160);
        std::cout << "For sign this form, we need a grade " << form160.getForSign() << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}