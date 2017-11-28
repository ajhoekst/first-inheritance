#include "shape3d.h"
#include "shape.h"
#include <cmath>

Shape3D::Shape3D(
    int number_of_sides,
    double length,
    double width,
    double height
) : ShapeBase( number_of_sides )
{
    length_ = fabs(length);
    width_ = fabs(width);
    height_ = fabs(height);
}

Shape3D::~Shape3D()
{
    // Default deconstructor: do nothing...no memory is dynamically allocated to Shape2D objects
}