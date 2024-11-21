#include "Span.hpp"

Span::Span() : _maxSize(0)
{
}

Span::Span(int maxSize) : _maxSize(maxSize)
{

}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numberList(other._numberList)
{

}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _numberList = other._numberList;
    }
    return *this;
}

void Span::addNumber(int value)
{
    if (_numberList.size() >= _maxSize)
        throw std::out_of_range("Span is already full");
    _numberList.push_back(value);
}

unsigned int Span::shortestSpan()
{
    if (_numberList.size() < 2)
        throw std::logic_error("Need minimum two numbers for calculate.");

    std::list<int> sortedList = _numberList;
    sortedList.sort();

    unsigned int shortestSpan = (*(++sortedList.begin()) - *sortedList.begin());
    for (std::list<int>::iterator it = sortedList.begin(); ++it != sortedList.end();)
    {
        std::list<int>::iterator prev = it;
        --prev;
        shortestSpan = std::min(shortestSpan, static_cast<unsigned int>(*it - *prev));
    }
    return shortestSpan;
}

unsigned int Span::longestSpan()
{
    if (_numberList.size() < 2)
        throw std::logic_error("Need minimum two numbers for calculate.");

    int minValue = *std::min_element(_numberList.begin(), _numberList.end());
    int maxValue = *std::max_element(_numberList.begin(), _numberList.end());

    return(static_cast<unsigned int>(maxValue - minValue));
}

Span::~Span()
{

}