#include "Zombie.hpp"

int main(void)
{
    Zombie *z = newZombie("BATU");
    z->announce();
    randomChump("EMIR");
    delete z;
}