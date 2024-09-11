#include "iter.hpp"
#include <ios>
#include <string>
#include <cctype>

void toUpperCase(std::string &str)
{
    for (std::string::size_type i = 0; i < str.size(); ++i){
        str[i] = std::toupper(static_cast<unsigned char>(str[i]));
    }
}

void lowerPrint(std::string &str)
{
    for (std::string::size_type i = 0; i < str.size(); ++i){
        str[i] = std::tolower(static_cast<unsigned char>(str[i]));
    }
}

int main(void)
{
    std::string arr[3] = {"ArRaY", "iS", "BeaUtiFuL"};
    size_t arrLen = sizeof(arr) / sizeof(std::string);

    std::cout << "Original array : " << std::endl;
    for (size_t i = 0; i < arrLen; i++)
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;

    ::iter(arr, arrLen, toUpperCase);

    std::cout << "Array after toUpperCase : " << std::endl;
    for (size_t i = 0; i < arrLen; i++)
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;

    ::iter(arr, arrLen, lowerPrint);

    std::cout << "Array after lowerPrint : " << std::endl;
    for (size_t i = 0; i < arrLen; i++)
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;

    return 0;
}
