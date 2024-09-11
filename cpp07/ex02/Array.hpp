#pragma once

template <typename T>
class Array
{
    private:
        T *_array;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator[](unsigned int i) const;
        unsigned int size() const;
        ~Array();
};

#include "Array.tpp"
