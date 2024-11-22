#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int randomValue = std::rand() % 3;

    switch (randomValue)
    {
        case 0:
            std::cout << "Instance of A is created." << std::endl;
            return new A();
        case 1:
            std::cout << "Instance of B is created." << std::endl;
            return new B();
        case 2:
            std::cout << "Instance of C is created." << std::endl;
            return new C();
        default:    
            return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Type not found." << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& refA = (dynamic_cast<A&>(p));
        (void)refA;
        std::cout << "A" << std::endl;
        return ;
    }
    catch (...)
    {

    }

    try
    {
        B& refB = (dynamic_cast<B&>(p));
        (void)refB;
        std::cout << "B" << std::endl;
        return ;
    }
    catch (...)
    {

    }

    try
    {
        C& refC = (dynamic_cast<C&>(p));
        (void)refC;
        std::cout << "C" << std::endl;
        return ;
    }
    catch (...)
    {

    }
    std::cout << "Type not found." << std::endl;
}