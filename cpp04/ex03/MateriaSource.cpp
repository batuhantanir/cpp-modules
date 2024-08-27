#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{

}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{

}

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{

}

MateriaSource::~MateriaSource()
{

}
