#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Undefined")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        std::cout << "Copy operator is called but all variables of Form is const." << std::endl;
    }
    return *this;
}

void ShrubberyCreationForm::performAction() const
{
    std::ofstream ofs((_target + "_shrubbery").c_str());
    if (ofs) 
    {
        ofs << "       ccee88oo\n"
            << "  C8O8O8Q8PoOb o8oo\n"
            << " dOB69QO8PdUOpugoO9bD\n"
            << "CgggbU8OU qOp qOdoUOdcb\n"
            << "   6OuU  /p u gcoUodpP\n"
            << "      \\\\//  /douUP\n"
            << "        \\\\////\n"
            << "         |||/\\\n"
            << "         |||\\/\n"
            << "         |||||\n"
            << "   .....//||||\\....\n";
    }
    else 
    {
        std::cerr << "Error: Could not create file" << std::endl;
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other) : AForm(other)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}