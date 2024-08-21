#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    {
        ClapTrap a;
        ClapTrap b("b");

        a.attack("b");
        a.takeDamage(10);
        a.takeDamage(5);
        b.beRepaired(3);
        a.beRepaired(5);
    }
    std::cout << "----------------ScavTrap----------------" << std::endl;
    {
        ScavTrap c;
        ScavTrap d("d");
        ScavTrap e;

        e = d;
        e.attack("c");
        e.takeDamage(19);
        e.takeDamage(2);
        d.beRepaired(7);
        c.attack("e");
        c.beRepaired(2);
        c.guardGate();
        c.guardGate();
    }
    std::cout << "----------------FragTrap----------------" << std::endl;
    {
        FragTrap c;
        FragTrap d("d");
        FragTrap e;

        e = d;
        e.attack("c");
        e.takeDamage(19);
        e.takeDamage(2);
        d.beRepaired(7);
        c.attack("e");
        c.beRepaired(2);
        c.highFivesGuys();
        d.highFivesGuys();
    }
    return 0;
}