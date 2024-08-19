#include "contact.hpp"

#pragma once
class Phonebook
{
private:
    Contact book[8];

public:
    Phonebook(/* args */);
    void add_user(size_t i);
    Contact get_user(size_t i);
    void search();
    ~Phonebook();
};
