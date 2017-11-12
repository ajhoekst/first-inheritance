#include "triangle.h"

Triangle::Triangle(
    double length,
    double width
) : Shape2D( -1, -1, -1 )
{
}

Triangle::~Triangle()
{
}

const char* Triangle::getLabel() const
{
    return "";
}

double Triangle::perimeter() const
{
    return -1;
}

double Triangle::area() const
{
    return -1;
}
