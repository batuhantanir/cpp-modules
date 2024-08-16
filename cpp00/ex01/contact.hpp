#include "iostream"

class Contact
{
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string p_number;
    std::string secret;

public:
    Contact(/* args */);
    void add_name(std::string name);
    void add_surname();
    void add_nickname();
    void add_p_number();
    void add_secret();
    void print_user(size_t i);
    ~Contact();
};
