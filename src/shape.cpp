#include "shape.h"

ShapeBase::ShapeBase(
    double number_of_sides
) : nSides_( number_of_sides )
{
}

ShapeBase::~ShapeBase()
{
    // Default deconstructor: do nothing...no memory is dynamically allocated to ShapeBase objects
}

const int ShapeBase::getSides() const
{
    return nSides_;
}
