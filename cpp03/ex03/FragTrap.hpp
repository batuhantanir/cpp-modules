#include "ClapTrap.hpp"

#pragma once

class FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap &operator=(const FragTrap &src);
    void highFivesGuys(void);
    virtual ~FragTrap();
};