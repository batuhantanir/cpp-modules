#include "phonebook.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

std::string add_user_prompt(std::string prompt_name)
{
    std::string data;
    std::cout << prompt_name + " : ";
    std::cin >> data;
    if (std::cin.eof() || std::cin.fail())
    {
        std::cin.clear();                                                   // Error flags are reset
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining invalid input
        return "";
    }
    return data;
}

size_t check_eof(std::string data)
{
    if (data.empty())
    {
        if (std::cin.eof())
        {
            std::cin.clear();                                                   // Error flags are reset
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining invalid input
            return 2;
        }
        return 1;
    }
    return 0;
}

void Phonebook::add_user(size_t i)
{
    std::string data;
    while (1)
    {
        size_t count = 0;
        size_t type = 0;
        data = add_user_prompt("Name");
        type = check_eof(data);
        if (type == 2)
            return;
        else if (type == 1)
            continue;
        book[i].add_name(data);
        count++;
        data = add_user_prompt("Surname");
        type = check_eof(data);
        if (type == 2)
            return;
        else if (type == 1)
            continue;
        this->book[i].add_surname(data);
        count++;
        data = add_user_prompt("Nickname");
        type = check_eof(data);
        if (type == 2)
            return;
        else if (type == 1)
            continue;
        this->book[i].add_nickname(data);
        count++;
        data = add_user_prompt("Phone Number");
        type = check_eof(data);
        if (type == 2)
            return;
        else if (type == 1)
            continue;
        this->book[i].add_p_number(data);
        count++;
        data = add_user_prompt("Secret");
        type = check_eof(data);
        if (type == 2)
            return;
        else if (type == 1)
            continue;
        this->book[i].add_secret(data);
        count++;
        if (count == 5)
            break;
    }
    this->book[i].print_details(i);
    std::cout << "Person added!" << std::endl;
}

Contact Phonebook::get_user(size_t i)
{
    return (book[i]);
}

void Phonebook::search()
{
    size_t i = -1;

    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (++i < 8)
    {
        Contact usr = get_user(i);
        usr.print_user(i);
    }
    while (1)
    {
        std::cout << "Please enter a number between 0 and 7: ";
        std::cin >> i;
        if (std::cin.eof())
            return;
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Error flags are reset
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining invalid input
            continue;
        }
        if (0 <= i && i <= 7)
            break;
    }
    Contact usr = get_user(i);
    usr.print_details(i);
}
