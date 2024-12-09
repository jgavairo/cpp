#include "PmergeMe.hpp"

int main()
{

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

    std::clock_t startTime = std::clock();
    vec.fordJonhsonSort(vector);
    std::clock_t endTime = std::clock();

    double timeVector = 1000.0 * (endTime - startTime) / CLOCKS_PER_SEC;
    std::cout << "Time to sort with vector: " << timeVector << " ms" << std::endl;

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

    std::clock_t startTimeDeque = std::clock();
    deq.fordJonhsonSort(deque);
    std::clock_t endTimeDeque = std::clock();

    double timeDeque = 1000.0 * (endTimeDeque - startTimeDeque) / CLOCKS_PER_SEC;
    std::cout << "Time to sort with vector: " << timeDeque << " ms" << std::endl;


}