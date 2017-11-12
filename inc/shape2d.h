#pragma once

#include "shape.h"

#include <string>

class Shape2D : public ShapeBase {
public:
    Shape2D(
        int number_of_sides,
        double length,
        double width
    );
    ~Shape2D();
    virtual const char* getLabel() const = 0;
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
protected:
    double length_;
    double width_;
};
