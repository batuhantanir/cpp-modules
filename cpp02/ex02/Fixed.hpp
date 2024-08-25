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
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed operator++(int);
    Fixed &operator++();
    Fixed operator--(int);
    Fixed &operator--();

    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
    static Fixed &max(Fixed &fixed1, Fixed &fixed2);
    static Fixed &max(const Fixed &fixed1, const Fixed &fixed2);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed_nbr);
