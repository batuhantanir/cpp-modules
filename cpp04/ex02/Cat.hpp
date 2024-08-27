#pragma once

#include "iostream"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;

public:
    Cat(/* args */);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &src);
    void makeSound() const;
    ~Cat();
};
