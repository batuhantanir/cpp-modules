#pragma once
#include "iostream"
#include <cctype>
#include <climits>
#include <cstdlib>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter &copy);

public:
    ~ScalarConverter();
    ScalarConverter &operator=(ScalarConverter &src);
    static void convert(std::string str);
    static bool isChar(std::string str);
    static bool isFloat(std::string str);
    static bool isDouble(std::string str);
    static bool isInt(std::string str);
    static bool pseudoStr(std::string str);
    static void strToChar(std::string str);
    static void strToInt(std::string str);
    static void strToFloat(std::string str);
    static void strToDouble(std::string str);
};
