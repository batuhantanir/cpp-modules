#pragma once

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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
