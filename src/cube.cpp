#include "cube.h"

Cube::Cube(
    double length
) : Box( length, length, length )
{
}

Cube::~Cube()
{
}

const char* Cube::getLabel() const
{
    return "Cube";
}