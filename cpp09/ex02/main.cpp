#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if(ac < 3)
    { 
        std::cout << "Error" << std::endl;
        return 0; 
    }
    PmergeMe p(av, ac);
    return 0;
}
