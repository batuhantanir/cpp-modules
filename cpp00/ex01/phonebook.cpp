#include "Phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

std::string Phonebook::add_user_prompt(std::string prompt_name)
{
    std::string data;
    std::cout << prompt_name + " : ";
    std::getline(std::cin, data);
    if (std::cin.eof() || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::exit(1);
    }
    return data;
}

void Phonebook::add_user(size_t i)
{
    std::string data;
    while (data.empty())
    {
        data = add_user_prompt("Name");
        book[i].add_name(data);
    }
    data = "";
    while (data.empty())
    {
        
        data = add_user_prompt("Surname");
        this->book[i].add_surname(data);
    }
    data = "";
    while (data.empty())
    {
        data = add_user_prompt("Nickname");
        this->book[i].add_nickname(data);
    }
    data = "";
    while (data.empty())
    {
        data = add_user_prompt("Phone Number");
        this->book[i].add_p_number(data);
    }
    data = "";
    while (data.empty())
    {
        data = add_user_prompt("Secret");
        this->book[i].add_secret(data);
    }
    std::cout << "Person added!" << std::endl;
}

Contact Phonebook::get_user(size_t i)
{
    return (book[i]);
}

void Phonebook::search()
{
    size_t i = -1;

    {
        Contact usr = get_user(0);
        std::string name = usr.get_name();
        if (name.empty())
        {
            std::cout << "Phonebook is empty" << std::endl;
            return;
        }
    }

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    while (++i < 8)
    {
        Contact usr = get_user(i);
        if(usr.get_name().empty())
            break;
        usr.print_user(i);
    }

    while (1)
    {
        std::cout << "Please enter a number between 0 and 7: ";
        std::cin >> i;
        if (std::cin.eof())
            return;
        if (std::cin.fail() || i < 0 || i > 7 )
        {
            std::cout << "Invalid Element"<< std::endl;
            std::cin.clear();
            std::cin.ignore();
            continue;
        }
        if (0 <= i && i <= 7)
        {
            Contact usr = get_user(i);
            if(usr.get_name().empty())
            {
                std::cout << "Element " << i << " is empty"<< std::endl;
                std::cin.clear();
                std::cin.ignore();
                continue;
            }
            usr.print_details(i);
            std::cin.clear();
            std::cin.ignore();
            break;
        }
    }
   
}
