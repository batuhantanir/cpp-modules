#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat bureaucrat("a", 11);
    Intern intern;
    Form *form;
    
    form = intern.makeForm("robotomy request", "b");
    try
    {
        if(!form)
            throw std::runtime_error("Form should not be NULL");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    form = intern.makeForm("presidential pardon", "b");
    try
    {
        if(!form)
            throw std::runtime_error("Form should not be NULL");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    form = intern.makeForm("shrubbery creation", "b");
    try
    {
        if(!form)
            throw std::runtime_error("Form should not be NULL");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    form = intern.makeForm("nonexistent form", "b");
    try
    {
        if(!form)
            throw std::runtime_error("Form should not be NULL");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
