#ifndef ROBOTOMYREQUESTFORM 
# define ROBOTOMYREQUESTFORM

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{   private:
        std::string _target;
        void performAction() const;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        ~RobotomyRequestForm();
};

#endif