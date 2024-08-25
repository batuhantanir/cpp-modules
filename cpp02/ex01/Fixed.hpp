#include <iostream>

#pragma once
class Fixed
{
private:
    int num;
    const static int frac;

public:
    Fixed();
    Fixed(int num);
    Fixed(float num);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed_nbr);
