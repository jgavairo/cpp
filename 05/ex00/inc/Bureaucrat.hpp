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

    class TooHighestException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Too highest grade.";
            }
    };

    class ToolowestException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Too lowest grade.";
            }
    };

    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif