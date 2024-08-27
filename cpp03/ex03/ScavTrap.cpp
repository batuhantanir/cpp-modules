#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->guarding_gate = false;
    std::cout << "ScavTrap Default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->guarding_gate = false;
    std::cout << "ScavTrap Constructor for the name " << this->name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &src)
    {
        attack_damage = src.attack_damage;
        energy_points = src.energy_points;
        hit_points = src.hit_points;
        name = src.name;
        guarding_gate = src.guarding_gate;
    }
    return *this;
}

void ScavTrap::guardGate(void)
{
    if (this->guarding_gate == false)
    {
        this->guarding_gate = true;
        std::cout << "ScavTrap " << this->name << " is now guarding the gate." << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " is already guarding the gate." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else if (this->energy_points == 0)
        std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructor for " << this->name << " called" << std::endl;
}
