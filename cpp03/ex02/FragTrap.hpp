#include "ClapTrap.hpp"

#pragma once

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap &operator=(const FragTrap &src);
    void highFivesGuys(void);
    ~FragTrap();
};
