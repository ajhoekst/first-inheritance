#pragma once

#include "shape2d.h"

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
