#include "Brain.hpp"

Brain::Brain(void)
{
    this->ideas;
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy constructor called!" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Brain Assignation operator called" << std::endl;
    if (this != &src)
        ideas = src.ideas;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}
