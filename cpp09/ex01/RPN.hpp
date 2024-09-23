#pragma once 
#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> _stack;

    public:
        RPN(/* args */);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        void launch(std::string str);
        void calculate(char op);
        void checkNum(std::string str);
        ~RPN();
};