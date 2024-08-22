#include "Zombie.hpp"

int main(void)
{
    Zombie *z = newZombie("John");

    if (!z)
        return (std::cerr << "Memory Allocation Error!" << std::endl, 1);

    z->announce();
    randomChump("Doe");

    delete z;

    return 0;
}
