#include "Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie *horde = zombieHorde(N, "John");
    
    if(!horde)
        return 1;

    for(int i = 0; i < N; i++)
        horde[i].announce();
    
    delete [] horde;
    
    return 0;
}
