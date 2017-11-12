#include "shape3d.h"

#include "shape.h"

Shape3D::Shape3D(
) : ShapeBase(  // Call parent constructor
    3           // Number of sides
)
{
}

Shape3D::~Shape3D()
{
    // Default deconstructor: do nothing...no memory is dynamically allocated to Shape2D objects
}