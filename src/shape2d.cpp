#include "shape2d.h"

#include "shape.h"

Shape2D::Shape2D(
) : ShapeBase(  // Call parent constructor
    2           // Number of sides
)
{
}

Shape2D::~Shape2D()
{
    // Default deconstructor: do nothing...no memory is dynamically allocated to Shape2D objects
}
