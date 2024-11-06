#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() 
{
    Bureaucrat bob("Boby", 50);
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "------TEST WITH SHRUBBERY------" << std::endl;
    ShrubberyCreationForm shrub;
    std::cout << std::endl;
    bob.executeForm(shrub);
    bob.signForm(shrub);
    bob.signForm(shrub);
    bob.executeForm(shrub);
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "------TEST WITH ROBOTOMY------" << std::endl;
    RobotomyRequestForm rob(bob.getName());
    std::cout << std::endl;
    bob.executeForm(rob);
    bob.signForm(rob);
    bob.executeForm(rob);
    std::cout << std::endl;
    std::cout << std::endl;
    
    
    std::cout << "------TEST WITH PRESIDENTIAL------" << std::endl;
    PresidentialPardonForm paul(bob.getName());
    std::cout << std::endl;
    bob.executeForm(paul);
    bob.signForm(paul);
    bob.executeForm(paul);
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}

/*
Shrubbery, for sign : 145, for execute: 137.

Robotomy, for sign : 72, for execute: 45.

Presidential, for sign : 25, for execute: 5.
*/