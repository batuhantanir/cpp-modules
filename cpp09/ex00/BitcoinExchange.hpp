#pragma once

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> _data;
        static std::string _dataName;
        std::ifstream _file;
        std::ifstream _dataFile;

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange & other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        void launch(std::string fileName);
        void openData(std::ifstream &file, std::string fileName);
        void setData(std::ifstream &file);
        void exchange(std::ifstream &file);
        std::string trimLine(std::string line) const;
};
