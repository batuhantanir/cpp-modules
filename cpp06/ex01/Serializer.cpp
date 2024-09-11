#include "Serializer.hpp"

Serializer::Serializer(/* args */) {}

Serializer::Serializer(Serializer &copy) {
    *this = copy;
}

Serializer &Serializer::operator=(Serializer &src) {
    (void)src;
    return (*this);
}

Serializer::~Serializer() {
}

uintptr_t Serializer::serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}