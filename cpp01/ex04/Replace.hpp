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
