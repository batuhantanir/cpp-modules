#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return (NULL);
    Zombie *horde = new Zombie[N];
    if(!horde)
    {
        std::cerr << "Zombie Memory Allocate error !" << std::endl;
        std::exit(1);
    }
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;
}
