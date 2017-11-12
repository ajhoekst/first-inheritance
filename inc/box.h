#pragma once

#include "shape3d.h"

class Box : public Shape3D {
public:
    Box(
        double length,
        double width,
        double height
    );
    ~Box();
    virtual const char* getLabel() const;
    virtual double area() const;
    virtual double volume() const;
};
