#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    Bureaucrat bureaucrat("a", 11);

    ShrubberyCreationForm shrubbery("b");
    RobotomyRequestForm robotomy("c");
    PresidentialPardonForm presidential("d");

    try
    {
        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bureaucrat.signForm(robotomy);
        bureaucrat.executeForm(robotomy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bureaucrat.signForm(presidential);
        bureaucrat.executeForm(presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
