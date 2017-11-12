#include "square.h"
#include "rectangle.h"

Square::Square(
    double length
) : Rectangle( -1, -1 )
{
}

Square::~Square()
{
}

const char* Square::getLabel() const
{
    return "";
}
