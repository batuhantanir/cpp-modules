#include <iostream>

#pragma once
class Fixed
{
private:
    int num;
    const static int frac = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};
