#pragma once

#include <iostream>
#include <string>

class Bureaucrat : public std::exception
{
    private:
        const std::string _name;
        size_t _grade;
    
    public:
        const char* what() const throw();
        const std::string &getName() const;
        size_t getGrade() const;
};