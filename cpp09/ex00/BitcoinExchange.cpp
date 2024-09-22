#include "BitcoinExchange.hpp"
#include <sstream>

std::string BitcoinExchange::_dataName = "data.csv";

BitcoinExchange::BitcoinExchange(/* args */) {
    openData(_dataFile, _dataName);
    setData(_dataFile);
}

BitcoinExchange::~BitcoinExchange() {
    if(!_data.empty())
        _data.clear();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &other) {
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
    if (this != &other)
        _data = other._data;
    return *this;
}

void BitcoinExchange::launch(std::string fileName){
    openData(_file, fileName);
    exchange(_file);
}

void BitcoinExchange::openData(std::ifstream &file, std::string fileName) {
    file.open(fileName);
    if (!file.is_open())
    {
        std::cerr << "Error: " << fileName << "is not open!" << std::endl;
        std::exit(1); 
    }
}

void BitcoinExchange::setData(std::ifstream &file) {
    std::string line;
    std::string date;
    double ex_rate;

    std::getline(file, line);
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        if(std::getline(ss, date, ',') && ss >> ex_rate){
            _data[date] = ex_rate;
        }
    }
    file.close();
    if(_data.empty())
    {
        std::cerr << "Error: There is no data in the file!" << std::endl;
        std::exit(1);
    }
}

void BitcoinExchange::exchange(std::ifstream &file)  {
    std::string line;
    std::string date;
    double ex_rate;

    std::getline(file, line);
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        if(std::getline(ss, date, '|')) {
            if(!(ss >> ex_rate))
            {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }
            date = trimLine(date);
            if (ex_rate < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else if(ex_rate > 1000)
                std::cerr << "Error: too large a number." << std::endl;
            else
            {    
                std::map<std::string, double>::const_iterator it = _data.find(date);
                if(it != _data.end())
                    std::cout << date << " => " << ex_rate << " = " << ex_rate * it->second << std::endl;
                else
                    std::cout << date << " => " << ex_rate << " = " << ex_rate * (--_data.upper_bound(date))->second << std::endl;
            }
        }
    }
    file.close();
}

std::string BitcoinExchange::trimLine(std::string line) const {
    size_t start = line.find_first_not_of(" \t");
    size_t end = line.find_last_not_of(" \t");

    return line.substr(start, end - start + 1);
}