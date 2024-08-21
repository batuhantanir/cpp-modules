#include "Replace.hpp"
#include <fstream>

Replace::Replace()
{
}

Replace::~Replace()
{
}

void Replace::setAllData(std::string filename, std::string search, std::string replace)
{
    if (filename.empty() || search.empty() || replace.empty())
    {
        std::cout << "Arguments cannot be empty" << std::endl;
        std::exit(1);
    }
    this->filename = filename;
    this->search = search;
    this->replace = replace;
}

void Replace::readFile()
{
    std::string file_str;
    char c;
    std::fstream fs;
    fs.open(filename, std::ios::in);
    if (fs.fail())
    {
        std::cerr << filename << " not open" << std::endl;
        std::exit(1);
    }
    while (!fs.eof() && fs >> std::noskipws >> c)
        file_str += c;
    fs.close();
    this->file_str = file_str;
}

void Replace::replaceFile()
{
    std::fstream fs;

    fs.open(filename + ".replace", std::ios::out);
    if (fs.fail())
    {
        std::cerr << filename << " not created" << std::endl;
        std::exit(1);
    }
    size_t count = file_str.size();
    size_t check = 0;
    for (size_t i = 0; i < count; i++)
    {
        check = file_str.find(search, i);
        if (check != std::string::npos && i == check)
        {
            fs << replace;
            i += search.size() - 1;
        }
        else
            fs << file_str[i];
    }
    fs.close();
}
