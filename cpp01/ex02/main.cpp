#include "iostream"

int main(void)
{
    std::string text = "HI THIS IS BRAIN";
    std::string *stringPTR = &text;
    std::string &stringREF = text;

    std::cout << &text << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << text << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
