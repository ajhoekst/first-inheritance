#pragma once

#include "box.h"

class Cube : public Box {
public:
    Cube(
        double length
    );
    ~Cube();
    virtual const char* getLabel() const;
    virtual double area() const;
    virtual double volume() const;
};
