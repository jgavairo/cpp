#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private:
    const std::string _name;
    int   _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);

    Bureaucrat& operator=(const Bureaucrat& other);

    std::string   getName() const;
    int           getGrade() const;

    ~Bureaucrat();
    
    class GradetooHighExecption: public std::exception
    {
        public:
            virtual const char* what() throw()
            {
                return "Too highest grade.";
            }
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif