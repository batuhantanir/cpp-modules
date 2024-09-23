#include "RPN.hpp"
#include <sstream>

RPN::RPN(/* args */) { }

RPN::~RPN() { }

RPN::RPN(const RPN &other) {
    *this = other;
}

RPN &RPN::operator=(const RPN &other) {
    if (this != &other)
        _stack = other._stack;
    return *this;
}

void RPN::calculate(char op) {
    if (_stack.size() < 2) {
        std::cout << "Error" << std::endl;
        std::exit(0);
    }
    int b = _stack.top();
    _stack.pop();
    int a = _stack.top();
    _stack.pop();
    switch (op)
    {
        case '+':
            _stack.push(a + b);
            break;
        case '-':
            _stack.push(a - b);
            break;
        case '*':
            _stack.push(a * b);
            break;
        case '/':
            _stack.push(a / b);
            break;
        default:
            break;
    }
}

void RPN::checkNum(std::string str) {
    for (size_t i = 0; i < str.size(); i++)
    {
        if (i == 0 && (str[i] == '+' || str[i] == '-'))
            continue;
        if (!std::isdigit(str[i]))
        {
            std::cout << "Error" << std::endl;
            std::exit(0);
        }
    }
}

void RPN::launch(std::string str) {
    std::istringstream iss(str);
    std::string token;
    int num;

    while (iss >> token)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if(token.size() > 1)
            {
                std::cout << "Error" << std::endl;
                std::exit(0);
            }
            calculate(token[0]);
        }
        else
        {
            checkNum(token);
            std::istringstream(token) >> num;
            _stack.push(num);
        }
    }
    if(_stack.size() != 1)
    {
        std::cout << "Error" << std::endl;
        std::exit(0);
    }
    std:: cout << _stack.top() << std::endl;
}
