#include "Zombie.hpp"

int main(void)
{
    Zombie *z = newZombie("BATU");
    if(!z)
    {
        std::cerr << "Memory Allocation Error!" << std::endl;
        return 1;
    }
    z->announce();
    randomChump("EMIR");
    delete z;
    return 0;
}
