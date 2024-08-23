#include <iostream>
#include <string>
#include "Weapon.hpp"

#pragma once
class HumanA
{
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
    void setWeapon(Weapon& weapon);
    ~HumanA();
};
