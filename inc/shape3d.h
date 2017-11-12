#pragma once

#include "shape.h"

class Shape3D : public ShapeBase {
public:
    Shape3D(
        int number_of_sides,
        double length,
        double width,
        double height
    );
    ~Shape3D();
    virtual const char* getLabel() const = 0;
    virtual double area() const = 0;
    virtual double volume() const = 0;
protected:
    double length_;
    double width_;
    double height_;
};
