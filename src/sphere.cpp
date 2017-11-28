#include "sphere.h"
#include <cmath>

Sphere::Sphere(
    double radius
) : Circle( radius )
{
}

Sphere::~Sphere()
{
}

const char* Sphere::getLabel() const
{
    return "Sphere";
}

double Sphere::area() const
{
    return 4.0 * M_PI * pow(length_,2);
}

double Sphere::volume() const
{
    return 4.0 / 3.0 * M_PI * pow(length_,3);
}