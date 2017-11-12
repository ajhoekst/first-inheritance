#pragma once

#include "circle.h"

class Sphere : public Circle {
public:
    Sphere(
        double radius
    );
    ~Sphere();
    virtual const char* getLabel() const;
    virtual double area() const;
    virtual double volume() const;
};
