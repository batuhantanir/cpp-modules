#pragma once

#include "iostream"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain *brain;

public:
    Dog(/* args */);
    Dog(const Dog &copy);
    Dog &operator=(const Dog &src);
    void makeSound() const;
    ~Dog();
};
