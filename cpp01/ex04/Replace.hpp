#include <iostream>
#include <string>
#include <fstream>

#pragma once
class Replace
{
private:
    std::string filename;
    std::string search;
    std::string replace;
    std::string file_str;
    std::fstream read_fs;
    std::fstream write_fs;
    void readFile();
    void replaceFile();

public:
    Replace();
    void replaceData(std::string filename, std::string search, std::string replace);
    ~Replace();
};
