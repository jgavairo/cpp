#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern()
{
    std::cout << "Intern created." << std::endl;
}

Intern& Intern::operator=(Intern& other)
{
    if (this != &other)
    {
        std::cout << "No attribute in this class" << std::endl;
    }
    return *this;
}

Intern::Intern(const Intern& other)
{
    (void)other;
    std::cout << "Intern created." << std::endl;
}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
    AForm* forms[3] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
    std::string names[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
    for (int i = 0 ; i < 3; i++)
    {
        if (name == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            for (int j = i + 1; j < 3; j++)
                delete forms[j];
            return forms[i];
        }
        delete forms[i];
    }
    std::cout << "Error: Form type '" << name << "' is not recongnized." << std::endl;
    return NULL;
}

Intern::~Intern()
{
    std::cout << "Intern destroyed." << std::endl;
}