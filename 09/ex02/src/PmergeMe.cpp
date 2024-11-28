#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {(void)other;}

PmergeMe& PmergeMe::operator=(PmergeMe& other) 
{
    if (this != &other) {}
    return *this;
}

PmergeMe::~PmergeMe() {}