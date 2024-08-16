#include "contact.hpp"

class Phonebook
{
    private:
        Contact book[8];
    public:
        Phonebook(/* args */);
        void add_user(std::string name, size_t i);
        Contact get_user(size_t i);
        void search();
        ~Phonebook();
};
