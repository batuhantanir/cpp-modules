#include "Replace.hpp"

Replace::Replace()
{
}

Replace::~Replace()
{
}

void Replace::replaceData(std::string filename, std::string search, std::string replace)
{
    if (filename.empty() || search.empty() || replace.empty())
    {
        std::cout << "Arguments cannot be empty" << std::endl;
        std::exit(1);
    }
    this->filename = filename;
    this->search = search;
    this->replace = replace;
    this->readFile();
    this->replaceFile();
}

void Replace::readFile()
{
    std::string buffer;

    read_fs.open(filename, std::ios::in);
    if (read_fs.fail())
    {
        std::cerr << filename << " not open" << std::endl;
        std::exit(1);
    }
    std::getline(read_fs, buffer, '\0');
    file_str += buffer;
    read_fs.close();
}

void Replace::replaceFile()
{
    write_fs.open(filename + ".replace", std::ios::out);
    if (write_fs.fail())
    {
        std::cerr << filename + ".replace"
                  << " not created" << std::endl;
        std::exit(1);
    }

    size_t check = 0;
    size_t i = 0;
    size_t len = file_str.length();

    for (; i < len; i++)
    {
        check = file_str.find(search, i);
        if (check != std::string::npos && i == check)
        {
            write_fs << replace;
            i += search.size() - 1;
        }
        else
            write_fs << file_str[i];
    }
    
    write_fs.close();
}
