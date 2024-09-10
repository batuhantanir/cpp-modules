#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("A", 1);
        Form f("F", 1, 1);
        a.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
