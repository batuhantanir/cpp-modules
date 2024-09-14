#pragma once
#include <iostream>

template <typename T, template U>
void iter(T *arr, size_t arrLen, void f(U &))
{
    if (arr == nullptr || f == nullptr)
        return;
    for (size_t i = 0; i < arrLen; i++)
        f(arr[i]);
}
