#include <iostream>
#include "Base.hpp" // Votre base et classes A, B, C

int main() {
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    std::cout << "=== Testing identify(Base*) ===" << std::endl;

    for (int i = 0; i < 5; ++i) 
    {
        Base* randomBase = generate();
        std::cout << "Generated object: ";
        identify(randomBase);
        delete randomBase;
    }

    std::cout << "\n=== Testing identify(Base&) ===" << std::endl;

    for (int i = 0; i < 5; ++i) 
    {
        Base* randomBase = generate();
        try 
        {
            std::cout << "Generated object: ";
            identify(*randomBase);
        } catch (...) 
        {
            std::cout << "Unknown type (exception caught)" << std::endl;
        }
        delete randomBase;
    }

    std::cout << "\n=== Testing failure cases ===" << std::endl;

    Base fakeBase;
    try 
    {
        std::cout << "Testing with Base object: ";
        identify(fakeBase);
    } catch (...) 
    {
        std::cout << "Unknown type (exception caught)" << std::endl;
    }

    Base* fakePtr = &fakeBase;
    std::cout << "Testing with Base pointer: ";
    identify(fakePtr);

    return 0;
}
