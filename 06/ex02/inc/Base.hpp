#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
};

void identify(Base& p);
void identify(Base* p);
Base* generate(void);

#endif