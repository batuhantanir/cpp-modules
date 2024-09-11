#pragma once
#include <iostream>
#include <string>

typedef struct s_data {
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serializer {
    private:
        Serializer(/* args */);
        Serializer(Serializer &copy);
        Serializer &operator=(Serializer &src);

    public:
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};