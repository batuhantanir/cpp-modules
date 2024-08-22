#include "iostream"

#pragma once
class Replace
{
private:
    std::string filename;
    std::string search;
    std::string replace;
    std::string file_str;
    void readFile();
    void replaceFile();

public:
    Replace();
    void setAllData(std::string filename, std::string search, std::string replace);

    ~Replace();
};
