#include "Span.hpp"

Span::Span() : _size(0) {
    
}

Span::Span(const unsigned int &n) : _size(n) {
    
}

Span::Span(const Span& src) {
    *this = src;
}

Span& Span::operator=(const Span& src) {
    if(this != &src){
        _span = src._span;
        _size = src._size;
    }
    
    return *this;
}

Span::~Span(){
    
}

void Span::addNumber(int number) {
    if(_span.size() == _size || _size < 1)
        throw SpanIsFullException();

    _span.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_span.size() + std::distance(begin, end) > _size)
        throw SpanIsFullException();
    
    _span.insert(_span.end(), begin, end);
}

int Span::shortestSpan() const {
    if(_span.size() < 2)
        throw SpanIsFullException();
    
    std::vector<int> tmp = _span;
    std::sort(tmp.begin(), tmp.end());
    int minSpan = tmp[1] - tmp[0];

    for (size_t i = 1; i < tmp.size() - 1; i++)
    {
        int span = tmp[i + 1] - tmp[i];
        if (span < minSpan)
            minSpan = span;
    }

    return minSpan; 
}

int Span::longestSpan() const {
    if (_span.size() < 2)
        throw SpanIsNotEnoughValuesException();

    int minNum = *std::min_element(_span.begin(), _span.end());
    int maxNum = *std::max_element(_span.begin(), _span.end());
    
    return maxNum - minNum;   
}

const char * Span::SpanIsFullException::what() const throw() {
    return "Span is full";
}

const char * Span::SpanIsNotEnoughValuesException::what() const throw() {
    return "Span does not have enough values";
}
