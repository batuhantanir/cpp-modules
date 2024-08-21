#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << ARG_ERR << std::endl;
        return 1;
    }

    Replace obj = Replace();

    obj.setAllData(av[1], av[2], av[3]);
    obj.readFile();
    obj.replaceFile();

    return (0);
}
