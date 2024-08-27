#include "Cure.hpp"


Cure::Cure(/* args */)
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
}

Cure &Cure::operator=(const Cure &src)
{
    if (this != &src)
    {
        // Assignment implementation
    }
    return *this;
}

Cure *Cure::clone() const
{
    Cure *clone = new Cure(*this);
    if (!clone)
    {
        std::cerr << "Memory allocation error" << std::endl;
        return nullptr;
    }
    return clone;
}

void Cure::use(ICharacter &target)
{
   std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

