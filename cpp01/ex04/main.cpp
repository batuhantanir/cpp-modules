#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "the format of the program should be ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    Replace obj;

    obj.replaceData(av[1], av[2], av[3]);

    return (0);
}
