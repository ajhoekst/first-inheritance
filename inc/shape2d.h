#pragma once

#include "shape.h"

#include <string>

class Shape2D : public ShapeBase {
public:
    Shape2D();
    ~Shape2D();
    virtual const char* getLabel() const = 0;
    virtual double perimeter() = 0;
    virtual double area() = 0;
protected:
    double length_;
    double width_;
};
