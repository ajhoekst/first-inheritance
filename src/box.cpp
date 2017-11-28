#include "box.h"

Box::Box(
    double length,
    double width,
    double height
) : Shape3D( 12, length, width, height )
{
}

Box::~Box()
{
}

const char* Box::getLabel() const
{
    return "Box";
}

double Box::area() const
{
    return 2 * (length_ * width_ + width_ * height_ + length_ * height_);
}

double Box::volume() const
{
    return length_ * width_ * height_;
}