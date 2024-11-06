#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Undefined")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
    if (this != &other)
        std::cout << "Copy operator is called but all variables of Form is const." << std::endl;
    return *this;
}

void RobotomyRequestForm::performAction() const
{
    std::cout << "Vrrrrrr Vrrrrrr..." << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2 == 0)
    {
        std::cout << "The target " << _target << " has been robnotomized successfully !" << std::endl;   
    }
    else
    {
        std::cout << "Robotomy of " << _target << " failed." << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}