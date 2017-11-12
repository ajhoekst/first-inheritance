#pragma once

class ShapeBase {
public:
    ShapeBase(
        double number_of_sides
    );
    ~ShapeBase();
    virtual const char* getLabel() const = 0;
    virtual const int getSides() const;
protected:
    int nSides_;
};
