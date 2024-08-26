#include "Fixed.hpp"
#include <cmath>

const int Fixed::frac = 8;

Fixed::Fixed() : num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->num = num << frac;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->num = roundf(num * (1 << frac));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        num = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    return num;
}

void Fixed::setRawBits(int const raw)
{
    num = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)num / (float)(1 << frac));
}

int Fixed::toInt(void) const
{
    return (roundf(num  / (1 << frac)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed_nbr)
{
    out << fixed_nbr.toFloat();
    return out;
}
