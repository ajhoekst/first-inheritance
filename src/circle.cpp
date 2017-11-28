#include "circle.h"
#include <cmath>

Circle::Circle(
    double length
) : Shape2D( 0, length, -1 )
{
}

Circle::~Circle()
{
}

const char* Circle::getLabel() const
{
    return "Circle";
}

double Circle::perimeter() const
{
    return 2 * M_PI * length_;
}

double Circle::area() const
{
    return M_PI * pow(length_,2);
}
