#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
    /* data */
public:
    AMateria(/* args */);
    AMateria(const AMateria &copy);
    AMateria &operator=(const AMateria &src);
    ~AMateria();
    AMateria(std::string const &type);
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};
