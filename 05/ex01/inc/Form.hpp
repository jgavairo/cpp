#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        const int _forSign;
        const int _forExecute;
        bool _isSigned;
    public:
        Form();
        Form(std::string name, int gradeForSign, int gradeForExecute);
        Form(Form& other);
        ~Form();

        Form& operator=(Form& other);

        std::string getName();
        int getForSign();
        int getForExecute();
        bool getState();

        void beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Too highest grade.";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Too lowest grade.";   
                }
        };
        
};

// std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif