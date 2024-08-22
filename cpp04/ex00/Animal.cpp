#include "Animal.hpp"

Animal::Animal(/* args */)
{
    type = "none";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy constructor called!" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &src)
        type = src.type;
    return *this;
}

std::string Animal::getType() const
{
    std::cout << "Animal getType function called" << std::endl;
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal could make several different sounds" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called" << std::endl;
}