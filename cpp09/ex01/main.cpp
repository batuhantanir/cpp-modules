#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    { 
        std::cout << "Error" << std::endl;
        return 0; 
    }
    RPN rpn;
    rpn.launch(av[1]);
    return 0;
}
