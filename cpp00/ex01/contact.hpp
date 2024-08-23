#include <iostream>
#include <string>

#pragma once
class Contact
{
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string p_number;
    std::string secret;

public:
    Contact();
    void add_name(std::string name);
    void add_surname(std::string surname);
    void add_nickname(std::string nickname);
    void add_p_number(std::string p_number);
    void add_secret(std::string secret);
    std::string get_name();
    std::string get_surname();
    std::string get_nickname();
    std::string get_p_number();
    std::string get_secret();
    void print_user(size_t i);
    void print_details(size_t i);
    ~Contact();
};
