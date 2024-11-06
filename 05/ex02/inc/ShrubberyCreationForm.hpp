#ifndef SHRUBBERYCREATIONFORM 
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{   private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name, std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        void performAction() const;
        ~ShrubberyCreationForm();
};

#endif