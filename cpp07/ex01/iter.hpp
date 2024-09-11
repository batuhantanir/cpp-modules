#pragma once
#include <iostream>

template <typename T>
void iter(T *arr, size_t arrLen, void f(T &))
{
    if (arr == nullptr || f == nullptr)
        return;
    for (size_t i = 0; i < arrLen; i++)
        f(arr[i]);
}
