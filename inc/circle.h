#pragma once

#include "shape2d.h"

// Here is a defintion of PI for use in method, to use, type M_PI
#define _USE_MATH_DEFINES
#include <cmath>

class Circle : public Shape2D {
public:
    Circle(
        double radius
    );
    ~Circle();
    virtual const char* getLabel() const;
    virtual double perimeter() const;
    virtual double area() const;
};
