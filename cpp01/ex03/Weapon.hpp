#include <iostream>
#include <string>

#pragma once
class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    Weapon();
    const std::string &getType();
    void setType(std::string type);
    ~Weapon();
};
