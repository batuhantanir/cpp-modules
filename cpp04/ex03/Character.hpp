#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        /* data */
    public:
        Character(/* args */);
        Character(const Character &copy);
        Character &operator=(const Character &src);
        std::string const &getName();
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        ~Character();
};