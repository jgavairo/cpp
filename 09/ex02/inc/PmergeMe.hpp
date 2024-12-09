#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class PmergeMe
{
    private:
        template <typename Container>
        void createPairs(Container& container, Container& small, Container& large);

        template <typename Container>
        void smallSort(Container& small);

        template <typename Container>
        void largeInsert(Container& small, Container& large);
        
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);

        PmergeMe& operator=(PmergeMe& other);

        ~PmergeMe();

        template <typename Container>
        void fordJonhsonSort(Container& container);
};

template <typename Container>
void PmergeMe::createPairs(Container& container, Container&small, Container& large)
{
    typename Container::const_iterator it = container.begin();
    while (it != container.end())
    {
        typename Container::const_iterator itNext = it;
        if (itNext != container.end())
            ++itNext;
        if (itNext != container.end())
        {
            if (*it < *itNext)
            {
                small.push_back(*it);
                large.push_back(*itNext);
            }
            else
            {
                small.push_back(*itNext);
                large.push_back(*it);
            }
        }
        else 
            small.push_back(*it);
        it = itNext;
        if (it != container.end())
            ++it;
    }
}

template <typename Container>
void PmergeMe::smallSort(Container& small)
{
    for (typename Container::iterator it = (small.begin() + 1); it != small.end(); ++it)
    {
        int value = *it;

        typename Container::iterator itPrev = it;
        while (itPrev != small.begin() && *(itPrev - 1) > value)
        {
            *itPrev = *(itPrev - 1);
            itPrev--;
        }
        *itPrev = value;
    }
    
}

template <typename Container>
void PmergeMe::largeInsert(Container& small, Container& large) 
{
    size_t n = large.size();

    std::vector<size_t> jacobIndices;
    size_t k = 0;
    while (true) 
    {
        size_t index = static_cast<size_t>(std::floor(n / std::pow(2, k)));
        if (index == 0) break;
        jacobIndices.push_back(index - 1);
        ++k;
    }
    std::reverse(jacobIndices.begin(), jacobIndices.end());

    for (std::vector<size_t>::iterator it = jacobIndices.begin(); it != jacobIndices.end(); ++it) {
        size_t idx = *it;
        typename Container::iterator pos = std::upper_bound(small.begin(), small.end(), large[idx]);
        small.insert(pos, large[idx]);
    }

    for (size_t i = 0; i < n; ++i) {
        if (std::find(jacobIndices.begin(), jacobIndices.end(), i) == jacobIndices.end()) {
            typename Container::iterator pos = std::upper_bound(small.begin(), small.end(), large[i]);
            small.insert(pos, large[i]);
        }
    }
}

template <typename Container>
void PmergeMe::fordJonhsonSort(Container& container)
{
    if (container.size() <= 1)
        return ;

    typename Container::const_iterator itCont = container.begin();
    while (itCont != container.end())
        std::cout << *itCont++ << std::endl;
    std::cout << "==========================" << std::endl;

    Container small, large;
    createPairs(container, small, large);
    smallSort(small);
    largeInsert(small, large);
    container = small;

    typename Container::const_iterator it = small.begin();
    while (it != small.end())
        std::cout << *it++ << std::endl;
}


#endif