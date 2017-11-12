#pragma once

#include "shape2d.h"

class Triangle : public Shape2D {
public:
    Triangle(
        double length,
        double width
    );
    ~Triangle();
    virtual const char* getLabel() const;
    virtual double perimeter() const;
    virtual double area() const;
};
