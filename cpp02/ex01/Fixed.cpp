#include "Fixed.hpp"

Fixed::Fixed() : num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->num = num;
}

Fixed::Fixed(float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->num = num;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        num = other.num;
    return *this;
}

std::ostream &Fixed::operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return num;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    num = raw;
}

float Fixed::toFloat(void) const
{
    return;
}

int Fixed::toInt(void) const
{
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
