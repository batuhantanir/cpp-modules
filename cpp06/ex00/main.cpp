#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2 && av[1])
        ScalarConverter::convert(av[1]); 	
	else
		std::cout << "No aguments provided or too many arguments ..." << std::endl;
}
