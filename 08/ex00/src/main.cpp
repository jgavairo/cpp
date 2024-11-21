#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
    try
    {
        std::cout << "----------TESTS----------" << std::endl << std::endl;
        std::vector<int> vector;
        vector.push_back(0);
        vector.push_back(2);
        vector.push_back(4);
        vector.push_back(6);
        vector.push_back(8);
        vector.push_back(10);
        std::cout << "Go testing with vector.. " << "Search '6'" << std::endl;
        std::cout << "Found: " << *easyfind(vector, 6) << std::endl << std::endl;


        std::cout << "-------------------------" << std::endl << std::endl;
        std::list<int> list;
        list.push_back(0);
        list.push_back(5);
        list.push_back(10);
        list.push_back(15);
        list.push_back(20);
        list.push_back(25);
        std::cout << "Go testing with list.. " << "Search '25'" << std::endl;
        std::cout << "Found: " << *easyfind(list, 25) << std::endl << std::endl;


        std::cout << "-------------------------" << std::endl << std::endl;

        std::cout << "Go testing with same vector.. " << "But search \"56\" and he doesnt exist."  << std::endl;
        std::cout << "Found: " << *easyfind(vector, 56) << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
}