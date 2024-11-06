#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Undefined")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
    if (this != &other)
    {
        std::cout << "Copy operator is called but all variables of Form is const." << std::endl;
    }
    return *this;
}

void PresidentialPardonForm::performAction() const
{
    std::cout << "The target "<< _target << " has been pardonned by Zaphod Beeblebrox." << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) : AForm(other)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}