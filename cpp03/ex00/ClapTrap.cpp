#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = copy;
}

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << name << " Constructor called!" << std::endl;
    this->name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    if (this != &src)
    {
        attack_damage = src.attack_damage;
        energy_points = src.energy_points;
        hit_points = src.hit_points;
        name = src.name;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else if (this->energy_points == 0)
        std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0)
    {
        if (hit_points - amount > 0)
            hit_points -= amount;
        else
            hit_points = 0;
        std::cout << "ClapTrap " << name << " was attacked and lost " << amount << " hit points, he now has " << hit_points << " hit points." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0 && hit_points > 0 && hit_points + amount <= 10)
    {
        hit_points += amount;
        std::cout << "ClapTrap " << name << " repaired itself and gained " << amount << " of hit points, he now has " << hit_points << "hit points." << std::endl;
        energy_points--;
        return;
    }
    if (energy_points == 0)
        std::cout << "ClapTrap " << name << " is not able to repair itself, because he doesn't have enough energy points." << std::endl;
    else if (hit_points == 0)
        std::cout << "ClapTrap " << name << " is not able to repair itself, because he doesn't have enough hit points." << std::endl;
    else
        std::cout << "ClapTrap " << name << " can't be repaired to have more than 10 hit points." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " Destructor called" << std::endl;
}
