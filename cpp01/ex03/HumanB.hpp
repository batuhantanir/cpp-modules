#include "iostream"
#include "Weapon.hpp"

#pragma once
class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &weapon);
    ~HumanB();
};
