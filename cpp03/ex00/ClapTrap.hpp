#include "iostream"

#pragma once
class ClapTrap
{
private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

public:
    ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap(std::string name);
    ClapTrap &operator=(const ClapTrap &src);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    virtual ~ClapTrap();
};
