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

void Contact::add_surname(std::string surname)
{
    this->surname = surname;
}

void Contact::add_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::add_p_number(std::string p_number)
{
    this->p_number = p_number;
}

void Contact::add_secret(std::string secret)
{
    this->secret = secret;
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
    std::cout << "|" << print_space(name) << (name.length() > 10 ? "." : "");
    std::cout << "|" << print_space(surname) << (surname.length() > 10 ? "." : "");
    std::cout << "|" << print_space(nickname) << (nickname.length() > 10 ? "." : "") << "|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void Contact::print_details(size_t i)
{
    std::cout << "Index : " << i << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Surname : " << surname << std::endl;
    std::cout << "Nickname : " << nickname << std::endl;
    std::cout << "Phone Number : " << p_number << std::endl;
    std::cout << "Secret : " << secret << std::endl;
}