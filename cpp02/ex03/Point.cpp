#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}
Point::Point(const Point &copy)
{
    (void)copy;
    // *this = copy;
}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        // x = other.x;
        // y = other.y;
    }
    return *this;
}

Point::~Point()
{
}
