#include "Ice.hpp"

Ice::Ice(/* args */)
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy)
{
    *this = copy;
}

Ice &Ice::operator=(const Ice &src)
{
    if (this != &src)
    {
        // Assignment implementation
    }
    return *this;
}

Ice *Ice::clone() const
{
    Ice *clone = new Ice(*this);
    if (!clone)
    {
        std::cerr << "Memory allocation error" << std::endl;
        return nullptr;
    }
    return clone;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
