#pragma once

#include "shape2d.h"

// Here is a defintion of PI for use in method
#define PI (3.1415)

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
