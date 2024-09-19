#pragma once

#include <iostream>
#include <vector>

class Span {
    private:
        std::vector<int> _span;
        unsigned int _size;
    public:
        Span();
        Span(const unsigned int &n);
        Span(const Span& src);
        Span& operator=(const Span& src);
        ~Span();
        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        
        class SpanIsFullException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class SpanIsNotEnoughValuesException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};
