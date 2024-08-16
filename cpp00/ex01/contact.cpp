#include "contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void Contact::add_name(std::string name)
{
    this->name = name;
}

void Contact::add_surname()
{
}

void Contact::add_nickname()
{
}

void Contact::add_p_number()
{
}

void Contact::add_secret()
{
}

std::string print_space(std::string str)
{
    size_t len = str.length();
    str.resize(9);
    size_t space_count = (len >= 10 ? 0 : (10 - len));
    for (size_t i = 0; i < space_count; i++)
        str = " " + str;
    return str;
}

void Contact::print_user(size_t i)
{
    std::cout << "|" << "         " << i;
    std::cout << "|" << print_space(this->name) << (this->name.length() > 10 ? "." : "");
    std::cout << "|" << print_space(this->surname) << (this->surname.length() > 10 ? "." : "");
    std::cout << "|" << print_space(this->nickname) << (this->nickname.length() > 10 ? "." : "") << "|"<< std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}
