#include "AForm.hpp"

AForm::AForm() : _name("Undefined") , _forSign(1), _forExecute(1), _isSigned(false) 
{
    std::cout << "Default operator called." << std::endl;
}

AForm::AForm(std::string name, int forSign, int forExecute) : _name(name) , _forSign(forSign), _forExecute(forExecute), _isSigned(false) 
{
    std::cout << "Custom operator called." << std::endl;
    if (_forExecute < 1 || _forSign < 1)
        throw AForm::GradeTooHighException();
    if (_forExecute > 150 || _forSign > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm& other) : _name(other.getName()), _forSign(other.getForSign()), _forExecute(other.getForExecute()), _isSigned(other.getState()), _target(other._target)
{
    std::cout << "Copy operator called." << std::endl;
}

AForm& AForm::operator=(AForm& other)
{
    if (this != &other)
    {
        std::cout << "Copy operator is called but all variables of AForm is const." << std::endl;
    }
    return *this;
}

std::string AForm::getName()
{
    return _name;
}

std::string AForm::getTarget()
{
    return _target;
}

bool AForm::getState()
{
    return _isSigned;
}

int AForm::getForExecute()
{
    return _forExecute;
}

int AForm::getForSign()
{
    return _forSign;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _forSign)
    {
        if (_isSigned == false)
            _isSigned = true;
    }
    else
        throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & bureaucrat)
{
    if (!_isSigned)
        throw AForm::FormNotSignedException();
    if (bureaucrat.getGrade() > _forExecute)
        throw GradeTooLowException();
    this->performAction();
}

AForm::~AForm()
{
    std::cout << "Destructor of " << _name << " called." << std::endl;
}
