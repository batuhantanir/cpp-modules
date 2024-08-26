#include "Fixed.hpp"
#include <cmath>

const int Fixed::frac = 8;

Fixed::Fixed() : num(0)
{
}

Fixed::Fixed(const int num)
{
    this->num = num << frac;
}

Fixed::Fixed(const float num)
{
    this->num = roundf(num * (1 << frac));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        num = other.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->num > other.num;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->num < other.num;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->num >= other.num;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->num <= other.num;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->num == other.num;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->num != other.num;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed res;
    res.setRawBits(this->num + other.num);
    return res;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed res;
    res.setRawBits(this->num - other.num);
    return res;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed res;
    res.setRawBits((this->num * other.num) >> this->frac);
    return res;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed res;
    res.setRawBits((this->num << this->frac) / other.num);
    return res;
}

Fixed Fixed::operator++(int)
{
    Fixed pre = *this;
    this->num++;
    return pre;
}

Fixed &Fixed::operator++()
{
    this->num++;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed pre = *this;
    this->num--;
    return pre;
}

Fixed &Fixed::operator--()
{
    this->num--;
    return *this;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return fixed2;
    return fixed1;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return fixed2;
    return fixed1;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return fixed2;
    return fixed1;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return fixed2;
    return fixed1;
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
    return (roundf(num / (1 << frac)));
}

Fixed::~Fixed()
{
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed_nbr)
{
    out << fixed_nbr.toFloat();
    return out;
}
