#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_trap")
{
    this->name = "default";
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap Default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
    this->name = name;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
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

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap Copy constructor called!" << std::endl;
    *this = copy;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap! My name is " << this->name
              << " and i am originated from the ClapTrap My name is "
              << ClapTrap::name << "." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Deconstructor for " << this->name << " called" << std::endl;
}
