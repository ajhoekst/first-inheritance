#pragma once

#include "box.h"

class Cube : public Box {
public:
    Cube(
        double length
    );
    ~Cube();
    virtual const char* getLabel() const;

    // Do not declare these methods here, because they can be inherited from box
    // virtual double area() const;
    // virtual double volume() const;
};
