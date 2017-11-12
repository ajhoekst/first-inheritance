#pragma once

#include "rectangle.h"

class Square : public Rectangle {
public:
    Square(
        double length
    );
    ~Square();
    virtual const char* getLabel() const;
};
