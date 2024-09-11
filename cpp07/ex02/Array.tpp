#include <iostream>
#include <stdexcept>

template <typename T>
Array<T>::Array() : _array(new T[0])
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n])
{
}

template <typename T>
Array<T>::Array(const Array& other)
{
    _array = new T[other.size()];
    for (unsigned int i = 0; i < other.size(); i++)
        _array[i] = other[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return *this;
    delete [] _array;
    _array = new T[other.size()];
    for (unsigned int i = 0; i < other.size(); i++)
        _array[i] = other[i];
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) const
{
    if (i >= size())
        throw std::out_of_range("Index out of range");
    if (i < 0)
        throw std::out_of_range("Index out of range");
    return _array[i];
}

template <typename T>

unsigned int Array<T>::size() const
{
    size_t count = 0;
    for (size_t i = 0; i < ; i++)
        count++;
    return count;
}

template <typename T>
Array<T>::~Array()
{
    delete [] _array;
}

