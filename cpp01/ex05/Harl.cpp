#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}


void Harl::complain(std::string level)
{
    std::string level_base[] = {"debug", "info", "warning", "error", "none"};
    int i = 0;
    while (i < 5)
    {
        if (level_base[i] == level)
            break;
        i++;
    }

    switch (i)
    {
    case 0:
        this->debug();
        break;
    case 1:
        this->info();
        break;
    case 2:
        this->warning();
        break;
    case 3:
        this->error();
        break;
    default:
        std::cout << "invalid command" << std::endl;
    }
}
