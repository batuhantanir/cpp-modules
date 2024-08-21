#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap Default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap Constructor for the name " << this->name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &src)
    {
        attack_damage = src.attack_damage;
        energy_points = src.energy_points;
        hit_points = src.hit_points;
        name = src.name;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor for " << this->name << " called" << std::endl;
}
