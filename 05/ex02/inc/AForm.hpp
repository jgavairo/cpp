#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected:
        const std::string _name;
        const int _forSign;
        const int _forExecute;
        bool _isSigned;
        const std::string _target;
        virtual void performAction() const = 0;
    public:
        AForm();
        AForm(std::string name, int gradeForSign, int gradeForExecute);
        AForm(AForm& other);
        virtual ~AForm();

        AForm& operator=(AForm& other);

        std::string getName();
        std::string getTarget();
        int getForSign();
        int getForExecute();
        bool getState();

        void beSigned(const Bureaucrat& bureaucrat);
        void execute(Bureaucrat const & bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "too highest grade.";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "too lowest grade.";   
                }
        };

        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "the form is not signed.";   
                }
        };
        
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif