#ifndef SHRUBBERYCREATIONFORM 
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{   private:
        std::string _target;
        void performAction() const;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
};

#endif