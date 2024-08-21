#include "iostream"

#pragma once
class Replace
{
private:
    std::string filename;
    std::string search;
    std::string replace;
    std::string file_str;

public:
    Replace();
    void setAllData(std::string filename, std::string search, std::string replace);
    void readFile();
    void replaceFile();
    ~Replace();
};

#define ARG_ERR "the format of the program should be ./replace <filename> <s1> <s2>"
#define ARG_EMPTY "Arguments cannot be empty"
