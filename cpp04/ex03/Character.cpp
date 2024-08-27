#include "Character.hpp"

Character::Character(/* args */)
{
}

Character::~Character()
{
}

Character::Character(const Character &copy)
{
    *this = copy;
}

Character &Character::operator=(const Character &src)
{

}

std::string const &Character::getName()
{
    return; // name
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}
