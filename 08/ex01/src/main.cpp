#include "Span.hpp"
#include <iostream>

void testCopyAndAssignmentIndependence() 
{
    std::cout << "\n===== Test 8 : Independence of Copies =====" << std::endl;

    Span sp(5);
    sp.addNumber(10);
    sp.addNumber(20);
    sp.addNumber(30);

    Span spCopy(sp);
    spCopy.addNumber(40);

    Span spAssign(5);
    spAssign = sp;
    spAssign.addNumber(50);

    std::cout << "Original Span - Shortest: " << sp.shortestSpan() << ", Longest: " << sp.longestSpan() << std::endl;
    std::cout << "Copied Span - Shortest: " << spCopy.shortestSpan() << ", Longest: " << spCopy.longestSpan() << std::endl;
    std::cout << "Assigned Span - Shortest: " << spAssign.shortestSpan() << ", Longest: " << spAssign.longestSpan() << std::endl;
}


int main() 
{
    try {
        std::cout << "===== Test 1 : Basic functionality =====" << std::endl;

        Span sp(10);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::cout << "\n===== Test 3 : Not enough numbers for spans =====" << std::endl;
        Span sp2(3);
        sp2.addNumber(10);

        try 
        {
            std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        try {
            std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << "\n===== Test 4 : Duplicates =====" << std::endl;
        Span sp3(3);
        sp3.addNumber(10);
        sp3.addNumber(10);
        sp3.addNumber(20);


        std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp3.longestSpan() << std::endl;

        std::cout << "\n===== Test 5 : Negative numbers =====" << std::endl;
        Span sp4(4);
        sp4.addNumber(-5);
        sp4.addNumber(-10);
        sp4.addNumber(0);
        sp4.addNumber(5);


        std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp4.longestSpan() << std::endl;

        std::cout << "\n===== Test 6 : Copy constructor =====" << std::endl;
        Span spCopy(sp);
        std::cout << "Shortest span (copied): " << spCopy.shortestSpan() << std::endl;
        std::cout << "Longest span (copied): " << spCopy.longestSpan() << std::endl; 

        spCopy.addNumber(42);
        std::cout << "Added 42 to spCopy" << std::endl;
        std::cout << "Original span longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Copied span longest span: " << spCopy.longestSpan() << std::endl;

        std::cout << "\n===== Test 7 : Assignment operator =====" << std::endl;
        Span spAssign(10);
        spAssign = sp;
        std::cout << "Shortest span (assigned): " << spAssign.shortestSpan() << std::endl;
        std::cout << "Longest span (assigned): " << spAssign.longestSpan() << std::endl;

        spAssign.addNumber(100);
        std::cout << "Added 100 to spAssign" << std::endl;
        std::cout << "Original span longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Assigned span longest span: " << spAssign.longestSpan() << std::endl;

        std::cout << std::endl; 
        testCopyAndAssignmentIndependence();
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }

    return 0;
}
