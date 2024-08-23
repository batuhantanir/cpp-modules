#include "Contact.hpp"

#pragma once


class Phonebook
{
private:
    Contact book[8];

public:
    Phonebook(/* args */);
    void add_user(size_t i);
    Contact get_user(size_t i);
    std::string add_user_prompt(std::string prompt_name);
    void search();
    ~Phonebook();
};
