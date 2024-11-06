#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() 
{
    // std::cout << "--try create new bureaucrat grade 110--" << std::endl;
    // try 
    // {
    //     Bureaucrat b("Alice", 110);
    //     std::cout << b << std::endl;
    // }
    // catch (const std::exception& e) 
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "--try create new bureaucrat grade 1--" << std::endl;
    // try 
    // {
    //     Bureaucrat b("Jarvis", 1);
    //     std::cout << b << std::endl;
    // }
    // catch (const std::exception& e) 
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "--try create new bureaucrat grade 160--" << std::endl;
    // try 
    // {
    //     Bureaucrat b("Alice", 160);
    //     std::cout << b << std::endl;
    // }
    // catch (const std::exception& e) 
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "--try create new bureaucrat grade 0--" << std::endl;
    // try 
    // {
    //     Bureaucrat b("Alice", 0);
    //     std::cout << b << std::endl;
    // }
    // catch (const std::exception& e) 
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // //----------------------------------------


    // std::cout << "--try create a new form grade default" << std::endl;
    // try
    // {
    //     Form form1;
    //     std::cout << "For sign this form, we need a grade " << form1.getForSign() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;


    // std::cout << "--try create a new form grade default" << std::endl;
    // try
    // {
    //     Form form0("Boss form", 0, 0);
    //     std::cout << "For sign this form, we need a grade " << form0.getForSign() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;


    // std::cout << "--try create a new form grade 160" << std::endl;
    // try
    // {
    //     Form form160("Noob form", 160, 160);
    //     std::cout << "For sign this form, we need a grade " << form160.getForSign() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "--try sign form grade 1 with a bureaucrat grade 1--" << std::endl;
    // try
    // {
    //     Form signTest("Tester Sign", 1, 1);
    //     std::cout << "For sign this form, we need a grade " << signTest.getForSign() << std::endl;

    //     Bureaucrat boss("Boss", 1);
    //     boss.signForm(signTest);

    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "--try sign form grade 1 with a bureaucrat grade 2--" << std::endl;
    // try
    // {
    //     Form signTest2("Tester Sign", 1, 1);
    //     std::cout << "For sign this form, we need a grade " << signTest2.getForSign() << std::endl;

    //     Bureaucrat boss2("Boss", 2);
    //     boss2.signForm(signTest2);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "--try sign form already signed--" << std::endl;
    // try
    // {
    //     Form signTest3("Tester Sign", 150, 150);
    //     std::cout << "For sign this form, we need a grade " << signTest3.getForSign() << std::endl;

    //     Bureaucrat boss3("Boss", 1);
    //     boss3.signForm(signTest3);
    //     boss3.signForm(signTest3);

    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    //------------------------------------

    ShrubberyCreationForm shrub;
    ShrubberyCreationForm shrub2("formulaire test", "tester");
    Bureaucrat bob("Boby", 1);
    bob.signForm(shrub);
    bob.executeForm(shrub2);

}