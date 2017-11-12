#include "shape2d.h"

#include "shape.h"

#include <cmath>

Shape2D::Shape2D(
    int number_of_sides,
    double length,
    double width
) : ShapeBase( -1 )
{
}

Shape2D::~Shape2D()
{
    // Default deconstructor: do nothing...no memory is dynamically allocated to Shape2D objects
}
