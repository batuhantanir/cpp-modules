#pragma once
#include "Data.hpp"
#include <iostream>
#include <string>

class Serialization
{
private:
    Serialization(/* args */);
    Serialization(Serialization &copy);

public:
    Serialization &operator=(Serialization &src);
    ~Serialization();
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};