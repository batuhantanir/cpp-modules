#include "ClapTrap.hpp"

#pragma once

class ScavTrap : virtual public ClapTrap
{
private:
    bool guarding_gate;

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap &operator=(const ScavTrap &src);
    void attack(const std::string &target);
    void guardGate(void);
    virtual ~ScavTrap();
};
