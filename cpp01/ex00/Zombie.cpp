#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name << " is woke up" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is disappeared" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
