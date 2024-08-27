#pragma once 
#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
    private:
        /* data */
    public:
        MateriaSource(/* args */);
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &src);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};