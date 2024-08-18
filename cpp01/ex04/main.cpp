#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "the format of the program should be ./replace <filename> <s1> <s2>" << std::endl; 
        return 0;
    }
    std::string filename = av[1];
    std::string search = av[2];
    std::string replace = av[3];
}