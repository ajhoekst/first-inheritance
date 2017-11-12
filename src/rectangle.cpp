#include "rectangle.h"

Rectangle::Rectangle(
    double length,
    double width
) : Shape2D( -1, -1, -1 )
{
}

Rectangle::~Rectangle()
{
}

const char* Rectangle::getLabel() const
{
    return "";
}

double Rectangle::perimeter() const
{
    return -1;
}

double Rectangle::area() const
{
    return -1;
}
