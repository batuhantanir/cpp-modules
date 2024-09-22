#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    { 
        std::cerr << "Error: Argument error" << std::endl;
        return 1; 
    }
    BitcoinExchange btc;
    btc.launch(av[1]);
    return 0;
}

// void __attribute__((destructor)) onExit()
// {
//     system("leaks btc");
// }