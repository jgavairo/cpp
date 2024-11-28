#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

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
    for (typename Container::iterator it = large.begin(); it != large.end(); ++it)
    {
        typename Container::iterator smallPos = std::upper_bound(small.begin(), small.end(), *it);
        small.insert(smallPos, *it);
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