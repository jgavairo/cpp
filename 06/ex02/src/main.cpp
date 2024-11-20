#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() 
{
    std::cout << "-- Basic tests with A, B and C --" << std::endl << std::endl;;

    Base* a = new A();
    Base* b = new B();
    Base* c = new C();

    std::cout << "call identify(a): " << std::ends;
    identify(a);
    std::cout << std::endl;

    std::cout << "call identify(b): " << std::ends;
    identify(b);
    std::cout << std::endl;

    std::cout << "call identify(c): " << std::ends;
    identify(c);
    std::cout << std::endl;


    std::cout << "call identify(*a): " << std::ends;
    identify(*a);
    std::cout << std::endl;

    std::cout << "call identify(*a): " << std::ends;
    identify(*b);
    std::cout << std::endl;

    std::cout << "call identify(*a): " << std::ends;
    identify(*c);
    std::cout << std::endl;
    

    delete a;
    delete b;
    delete c;

    std::cout << "----------------------" << std::endl << std::endl;

    std::cout << "-- Tests with generate() --" << std::endl << std::endl;

    Base* r = generate();

    std::cout << "call identify(r): " << std::ends;
    identify(r);
    std::cout << std::endl;

    delete r;

    return 0;
}