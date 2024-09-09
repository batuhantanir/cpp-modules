#include "Serialization.hpp"

Serialization::Serialization(/* args */)
{
}

Serialization::Serialization(Serialization &copy)
{
    *this = copy;
}

Serialization &Serialization::operator=(Serialization &src)
{
    (void)src;
    return (*this);
}

Serialization::~Serialization()
{
}

uintptr_t Serialization::serialize(Data *ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data *Serialization::deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}
