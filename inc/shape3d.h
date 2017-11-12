#pragma once

#include "shape.h"

class Shape3D : public ShapeBase {
public:
    Shape3D();
    ~Shape3D();
    virtual const char* getLabel() const = 0;
    virtual double area() = 0;
    virtual double volume() = 0;
protected:
    double height_;
};
