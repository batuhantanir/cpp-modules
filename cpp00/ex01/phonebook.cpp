#include "phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::add_user(std::string name, size_t i)
{
    this->book[i].add_name(name);
}

Contact Phonebook::get_user(size_t i)
{
    return (this->book[i]);
}

void Phonebook::search()
{
    size_t i = -1;

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (++i < 8)
    {
        Contact usr = this->get_user(i);
        usr.print_user(i);
    }
    while (1)
    {
        std::cin >> i;
        if (std::cin.eof())
            return;
        if (std::cin.fail())
        {
            std::cout << "please enter 0 - 7" << std::endl;
            continue;
        }
        if (0 <= i && i <= 7)
            break;
        std::cout << "please enter 0 - 7" << std::endl;
    }
    Contact usr = this->get_user(i);
    usr.print_user(i);
}
