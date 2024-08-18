#include "phonebook.hpp"

int check_prompt(std::string line, Phonebook *book, size_t *i)
{
    if (line == "ADD")
    {
        (*book).add_user(*i);
        (*i)++;
    }
    else if (line == "SEARCH")
        (*book).search();
    else if (line == "EXIT")
        return 1;
    return 0;
}

int prompt_line(Phonebook *book)
{
    std::string line;
    size_t i = 0;
    while (1)
    {
        if (i == 8)
            i = 0;
        std::cout << "Please enter ADD | SEARCH | EXIT" << std::endl;
        std::cout << "> ";
        std::cin >> line;
        if (std::cin.eof())
            return 0;
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Error flags are reset
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining invalid input
            continue;
        }
        if (check_prompt(line, book, &i))
            return 0;
    }
    return 0;
}

int main(void)
{
    Phonebook book;
    return prompt_line(&book);
}
