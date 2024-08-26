#include "Fixed.hpp"

#pragma once
class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(const float x, const float y);
    Point(const Point &copy);
    Point &operator=(const Point &other);
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
