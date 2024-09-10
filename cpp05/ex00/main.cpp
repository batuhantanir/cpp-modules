#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *a;
    Bureaucrat *b;

    try
    {
        a = new Bureaucrat("A", 1);
        b = new Bureaucrat("B", 150);
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
        a->incrementGrade();
        b->decrementGrade();
        std::cout << *a << std::endl;
        std::cout << *b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    delete a;
    delete b;

    return 0;
}
