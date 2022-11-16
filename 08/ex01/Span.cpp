#include "Span.hpp"

Span::Span(unsigned int n) : _N(n) {}

Span::~Span() {}

Span::Span(const Span & copy)
{
    (*this) = copy;
}

Span & Span::operator=(const Span &copy)
{
    this->_data = copy._data;
    this->_N = copy._N;
    return (*this);
}

void Span::addNumber(unsigned int num)
{
    if (_data.size() >= _N)
        throw SpanException("The Array is full, can't put the number!");
    _data.push_back(num);
}

int & Span::operator[] (unsigned int index)
{
    if (index >= _N || index < 0)
        throw SpanException("Array index is out of range!");
    return (this->_data[index]);
}


unsigned int Span::shortestSpan()
{
    if (_data.size() == 0 || _data.size() == 1)
        throw SpanException("Impossible");

    std::vector<int>::iterator it = _data.begin();
    std::vector<int>::iterator it2;

    unsigned int min = abs(*it - *(it + 1));
    for (it = _data.begin() ; it != _data.end(); it++)
    {
        for (it2 = it + 1; it2 != _data.end(); ++it2)
        {
            unsigned int k = abs(*it2 - *it);
            if (k < min)
                min = k;
        }
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (_data.size() == 0 || _data.size() == 1)
        throw SpanException("Impossible");
    std::vector<int>::iterator it;
    it = std::min_element(_data.begin(), _data.end());

    std::vector<int>::iterator it_max;
    it_max = std::max_element(_data.begin(), _data.end());

    return (*it_max - *it);
}