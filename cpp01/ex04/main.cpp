#include <iostream>
#include <fstream>

int replace_file(std::string filename, std::string search, std::string replace, std::string file_str)
{
    std::fstream fs;

    fs.open(filename + ".replace", std::ios::out);
    if (fs.fail())
    {
        std::cerr << filename << " not created" << std::endl;
        return 1;
    }
    size_t count = file_str.size();
    size_t check = 0;
    for (size_t i = 0; i < count; i++)
    {
        check = file_str.find(file_str[i], i);
        if (check == )
        {
            i += ;
        }
        else
        {
        }
    }

    (void)file_str;
    (void)search;
    (void)replace;
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "the format of the program should be ./replace <filename> <s1> <s2>" << std::endl;
        return 0;
    }
    std::string filename = av[1];
    std::string search = av[2];
    std::string replace = av[3];
    std::string file_str;
    char c;
    std::fstream fs;
    fs.open(filename, std::ios::in);
    if (fs.fail())
    {
        std::cerr << filename << " not open" << std::endl;
        return 1;
    }
    while (!fs.eof() && fs >> std::noskipws >> c)
        file_str += c;
    std::cout << file_str;
    return (replace_file(filename, search, replace, file_str));
}
