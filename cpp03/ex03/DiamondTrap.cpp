#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "DiamondTrap Default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "DiamondTrap Constructor for the name " << this->name << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    if (this != &src)
    {
        attack_damage = src.attack_damage;
        energy_points = src.energy_points;
        hit_points = src.hit_points;
        name = src.name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Deconstructor for " << this->name << " called" << std::endl;
}
