#include "PmergeMe.hpp"

int main()
{
    // if (argc < 2)
    //     return (std::cerr << "This program need arguments." << std::endl, -1);

    std::cout << "=====Test with vector=====" << std::endl;
    std::vector<int> vector;
    vector.push_back(999);
    vector.push_back(5);
    vector.push_back(75);
    vector.push_back(1);
    vector.push_back(999);
    vector.push_back(56);
    vector.push_back(9);
    vector.push_back(534);
    vector.push_back(2);
    vector.push_back(0);
    PmergeMe vec;
    vec.fordJonhsonSort(vector);
    std::cout << std::endl;


    std::cout << "=====Test with deque=====" << std::endl;
    std::deque<int> deque;
    deque.push_back(999);
    deque.push_back(5);
    deque.push_back(75);
    deque.push_back(1);
    deque.push_back(999);
    deque.push_back(56);
    deque.push_back(9);
    deque.push_back(534);
    deque.push_back(2);
    deque.push_back(0);
    PmergeMe deq;
    deq.fordJonhsonSort(deque);
}