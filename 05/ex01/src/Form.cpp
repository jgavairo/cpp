#include "Form.hpp"

Form::Form() : _name("Undefined") , _forSign(1), _forExecute(1), _isSigned(false) 
{
    std::cout << "Default operator called." << std::endl;
}

Form::Form(std::string name, int forSign, int forExecute) : _name(name) , _forSign(forSign), _forExecute(forExecute), _isSigned(false) 
{
    std::cout << "Custom operator called." << std::endl;
    if (_forExecute < 1 || _forSign < 1)
        throw Form::GradeTooHighException();
    if (_forExecute > 150 || _forSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form& other) : _name(other.getName()), _forSign(other.getForSign()), _forExecute(other.getForExecute()), _isSigned(other.getState())
{
    std::cout << "Copy operator called." << std::endl;
}

Form& Form::operator=(Form& other)
{
    if (this != &other)
    {
        std::cout << "Copy operator is called but all variables of Form is const." << std::endl;
    }
    return *this;
}

std::string Form::getName()
{
    return _name;
}

bool Form::getState()
{
    return _isSigned;
}

int Form::getForExecute()
{
    return _forExecute;
}

int Form::getForSign()
{
    return _forSign;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _forSign)
    {
        if (_isSigned == false)
            _isSigned = true;
    }
    else
        throw GradeTooLowException();
}

Form::~Form()
{
    std::cout << "Destructor called." << std::endl;
}
