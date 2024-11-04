#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unedefined"), _grade(0)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade > 150)
        throw ToolowestException();
    else if (_grade < 1)
        throw TooHighestException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        _grade = other._grade;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

Bureaucrat::~Bureaucrat()
{

}