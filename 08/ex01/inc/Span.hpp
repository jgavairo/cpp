#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <algorithm>

class Span
{
private:
    unsigned int     _maxSize;
    std::list<int>   _numberList;
public:
    Span();
    Span(int maxSize);
    Span(const Span& other);
    Span& operator=(const Span& other);

    void addNumber(int value);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    ~Span();
};

#endif