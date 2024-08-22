#pragma once

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
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
