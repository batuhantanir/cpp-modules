#pragma once

template <typename T>
void swap(T &v1, T &v2)
{
    T temp = v2;

    v2 = v1;
    v1 = temp;
}

template <typename T>
T min(T v1, T v2)
{
    return (v1 >= v2 ? v2 : v1);
}

template <typename T>
T max(T v1, T v2)
{
    return (v1 <= v2 ? v2 : v1);
}
