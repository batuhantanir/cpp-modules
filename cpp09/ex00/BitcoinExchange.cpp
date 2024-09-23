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
            date = trimLine(date);
            if(checkDate(date))
                continue;
            if(!(ss >> ex_rate))
            {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }
            if (ex_rate < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else if(ex_rate > 1000)
                std::cerr << "Error: too large a number." << std::endl;
            else
            {    
                std::map<std::string, double>::const_iterator it = _data.find(date);
                std::cout << date << " => " << ex_rate;
                if(it != _data.end())
                    ex_rate *= it->second;
                else
                    ex_rate *= (--_data.upper_bound(date))->second;
                std::cout << " = " << ex_rate << std::endl;
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

bool BitcoinExchange::checkDate(std::string &date) {
    if(date.size() != 10)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        return true;
    }
    double year, month, day;
    char c;
    std::istringstream ss(date);
    if(!(ss >> year) || !(ss >> c) || !(ss >> month) || !(ss >> c) || !(ss >> day))
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        return true;
    }
    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        return true;
    }
    if(date > _data.rbegin()->first || date < _data.begin()->first)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        return true;
    }
    return false;
}