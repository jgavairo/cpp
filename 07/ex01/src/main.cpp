#include <iostream>
#include "iter.hpp"

int main() 
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Tableau avant incrémentation : ";
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    iter(intArray, intArraySize, increment);

    std::cout << "Tableau après incrémentation : ";
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    std::string strArray[] = {"Salut", "42", "C++"};
    size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Tableau de chaînes : ";
    iter(strArray, strArraySize, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
