#include <iostream>

#pragma once
class Fixed
{
private:
    int num;
    const static int frac = 8;

public:
    Fixed();
    Fixed(int num);
    Fixed(float num);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    std::ostream &Fixed::operator<<(std::ostream &str, Fixed const &fixed_nbr);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed();
};
