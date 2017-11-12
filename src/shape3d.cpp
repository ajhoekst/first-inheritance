#include "shape3d.h"

#include "shape.h"

Shape3D::Shape3D(
    int number_of_sides,
    double length,
    double width,
    double height
) : ShapeBase( -1 )
{
}

Shape3D::~Shape3D()
{
    // Default deconstructor: do nothing...no memory is dynamically allocated to Shape2D objects
}