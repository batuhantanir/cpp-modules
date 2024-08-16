#include "phonebook.hpp"

int main(void)
{
    Phonebook book;
    book.add_user("batu",0);
    book.add_user("batuasdasdasdasdasd",1);
    // Contact a = book.get_user(0);
    // a.print_user();
    book.search();
}