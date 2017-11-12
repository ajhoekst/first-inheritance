#include "circle.h"

Circle::Circle(
    double length
) : Shape2D( -1, -1, -1 )
{
}

Circle::~Circle()
{
}

const char* Circle::getLabel() const
{
    return "";
}

double Circle::perimeter() const
{
    return -1;
}

double Circle::area() const
{
    return -1;
}
