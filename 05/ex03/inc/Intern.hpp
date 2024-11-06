#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(Intern& other);
        ~Intern();

        AForm* makeForm(const std::string& name, const std::string& target);
};

#endif