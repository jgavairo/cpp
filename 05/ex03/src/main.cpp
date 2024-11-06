#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() 
{
    Intern intern;
    Bureaucrat bob("Boss", 1);

    AForm* test1 = intern.makeForm("shrubbery creation", bob.getName());
    AForm* test2 = intern.makeForm("presidential pardon", bob.getName());
    AForm* test3 = intern.makeForm("robotomy request", bob.getName());

    std::cout << std::endl;

    std::cout << *test1 << std::endl;
    std::cout << *test2 << std::endl;
    std::cout << *test3 << std::endl;

    std::cout << std::endl;

    bob.signForm(*test1);
    bob.signForm(*test2);
    bob.signForm(*test3);

    std::cout << std::endl;

    std::cout << *test1 << std::endl;
    std::cout << *test2 << std::endl;
    std::cout << *test3 << std::endl;

    std::cout << std::endl;

    bob.executeForm(*test1);
    bob.executeForm(*test2);
    bob.executeForm(*test3);

    std::cout << std::endl;

    delete test1;
    delete test2;
    delete test3;
    return 0;
}

/*
Shrubbery, for sign : 145, for execute: 137.

Robotomy, for sign : 72, for execute: 45.

Presidential, for sign : 25, for execute: 5.
*/