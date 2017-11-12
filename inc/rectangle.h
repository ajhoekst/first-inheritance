#pragma once

#include "shape2d.h"

class Rectangle : public Shape2D {
public:
    Rectangle(
        double length,
        double width
    );
    ~Rectangle();
    virtual const char* getLabel() const;
    virtual double perimeter() const;
    virtual double area() const;
};
