#include "gtest/gtest.h"

#include "triangle.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"

#define _USE_MATH_DEFINES
#include <cmath>

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}

/* Triangle Tests */
// Label
TEST(TriangleTest, Label)
{
    Triangle t(1, 1);
    EXPECT_STREQ("Triangle", t.getLabel());
}
// End Of Label
// Sides
TEST(TriangleTest, Sides)
{
    Triangle t(1, 1);
    EXPECT_EQ(3, t.getSides());
}
// End Of Sides
// Area
TEST(TriangleTest, AreaPositiveLengthPositiveWidth)
{
    Triangle t(1, 1);
    EXPECT_EQ(0.5, t.area());
}
TEST(TriangleTest, AreaPositiveLengthZeroWidth)
{
    Triangle t(1, 0);
    EXPECT_EQ(0, t.area());
}
TEST(TriangleTest, AreaPositiveLengthNegativeWidth)
{
    Triangle t(1, -1);
    EXPECT_EQ(0.5, t.area());
}
TEST(TriangleTest, AreaZeroLengthPositiveWidth)
{
    Triangle t(0, 1);
    EXPECT_EQ(0, t.area());
}
TEST(TriangleTest, AreaZeroLengthZeroWidth)
{
    Triangle t(0, 0);
    EXPECT_EQ(0, t.area());
}
TEST(TriangleTest, AreaZeroLengthNegativeWidth)
{
    Triangle t(0, -1);
    EXPECT_EQ(0, t.area());
}
TEST(TriangleTest, AreaNegativeLengthPositiveWidth)
{
    Triangle t(-1, 1);
    EXPECT_EQ(0.5, t.area());
}
TEST(TriangleTest, AreaNegativeLengthZeroWidth)
{
    Triangle t(-1, 0);
    EXPECT_EQ(0, t.area());
}
TEST(TriangleTest, AreaNegativeLengthNegativeWidth)
{
    Triangle t(-1, -1);
    EXPECT_EQ(0.5, t.area());
}
// End Of Area
// Perimeter
TEST(TriangleTest, PerimeterPositiveLengthPositiveWidth)
{
    Triangle t(6, 4);
    EXPECT_EQ(11, t.perimeter());
}
TEST(TriangleTest, PerimeterPositiveLengthZeroWidth)
{
    Triangle t(6, 0);
    EXPECT_EQ(6, t.perimeter());
}
TEST(TriangleTest, PerimeterPositiveLengthNegativeWidth)
{
    Triangle t(6, -4);
    EXPECT_EQ(11, t.perimeter());
}
TEST(TriangleTest, PerimeterZeroLengthPositiveWidth)
{
    Triangle t(0, 4);
    EXPECT_EQ(4, t.perimeter());
}
TEST(TriangleTest, PerimeterZeroLengthZeroWidth)
{
    Triangle t(0, 0);
    EXPECT_EQ(0, t.perimeter());
}
TEST(TriangleTest, PerimeterZeroLengthNegativeWidth)
{
    Triangle t(0, -4);
    EXPECT_EQ(4, t.perimeter());
}
TEST(TriangleTest, PerimeterNegativeLengthPositiveWidth)
{
    Triangle t(-6, 4);
    EXPECT_EQ(11, t.perimeter());
}
TEST(TriangleTest, PerimeterNegativeLengthZeroWidth)
{
    Triangle t(-6, 0);
    EXPECT_EQ(6, t.perimeter());
}
TEST(TriangleTest, PerimeterNegativeLengthNegativeWidth)
{
    Triangle t(-6, -4);
    EXPECT_EQ(11, t.perimeter());
}
// End Of Perimeter
/* End Of Triangle Tests */
/* Rectangle Tests */
// Label
TEST(RectangleTest, Label)
{
    Rectangle r(1, 1);
    EXPECT_STREQ("Rectangle", r.getLabel());
}
// End Of Label
// Sides
TEST(RectangleTest, Sides)
{
    Rectangle r(1, 1);
    EXPECT_EQ(4, r.getSides());
}
// End Of Sides
// Area
TEST(RectangleTest, AreaPositiveLengthPositiveWidth)
{
    Rectangle r(1, 1);
    EXPECT_EQ(1, r.area());
}
TEST(RectangleTest, AreaPositiveLengthZeroWidth)
{
    Rectangle r(1, 0);
    EXPECT_EQ(0, r.area());
}
TEST(RectangleTest, AreaPositiveLengthNegativeWidth)
{
    Rectangle r(1, -1);
    EXPECT_EQ(1, r.area());
}
TEST(RectangleTest, AreaZeroLengthPositiveWidth)
{
    Rectangle r(0, 1);
    EXPECT_EQ(0, r.area());
}
TEST(RectangleTest, AreaZeroLengthZeroWidth)
{
    Rectangle r(0, 0);
    EXPECT_EQ(0, r.area());
}
TEST(RectangleTest, AreaZeroLengthNegativeWidth)
{
    Rectangle r(0, -1);
    EXPECT_EQ(0, r.area());
}
TEST(RectangleTest, AreaNegativeLengthPositiveWidth)
{
    Rectangle r(-1, 1);
    EXPECT_EQ(1, r.area());
}
TEST(RectangleTest, AreaNegativeLengthZeroWidth)
{
    Rectangle r(-1, 0);
    EXPECT_EQ(0, r.area());
}
TEST(RectangleTest, AreaNegativeLengthNegativeWidth)
{
    Rectangle r(-1, -1);
    EXPECT_EQ(1, r.area());
}
// End Of Area
// Perimeter
TEST(RectangleTest, PerimeterPositiveLengthPositiveWidth)
{
    Rectangle r(1, 1);
    EXPECT_EQ(4, r.perimeter());
}
TEST(RectangleTest, PerimeterPositiveLengthZeroWidth)
{
    Rectangle r(1, 0);
    EXPECT_EQ(1, r.perimeter());
}
TEST(RectangleTest, PerimeterPositiveLengthNegativeWidth)
{
    Rectangle r(1, -1);
    EXPECT_EQ(4, r.perimeter());
}
TEST(RectangleTest, PerimeterZeroLengthPositiveWidth)
{
    Rectangle r(0, 1);
    EXPECT_EQ(1, r.perimeter());
}
TEST(RectangleTest, PerimeterZeroLengthZeroWidth)
{
    Rectangle r(0, 0);
    EXPECT_EQ(0, r.perimeter());
}
TEST(RectangleTest, PerimeterZeroLengthNegativeWidth)
{
    Rectangle r(0, -1);
    EXPECT_EQ(1, r.perimeter());
}
TEST(RectangleTest, PerimeterNegativeLengthPositiveWidth)
{
    Rectangle r(-1, 1);
    EXPECT_EQ(4, r.perimeter());
}
TEST(RectangleTest, PerimeterNegativeLengthZeroWidth)
{
    Rectangle r(-1, 0);
    EXPECT_EQ(1, r.perimeter());
}
TEST(RectangleTest, PerimeterNegativeLengthNegativeWidth)
{
    Rectangle r(-1, -1);
    EXPECT_EQ(4, r.perimeter());
}
// End Of Perimeter
/* End Of Rectangle Tests */
/* Square Tests */
TEST(SquareTest, Label)
{
    Square s(1);
    EXPECT_STREQ("Square", s.getLabel());
}
TEST(SquareTest, Sides)
{
    Square s(1);
    EXPECT_EQ(4, s.getSides());
}
TEST(SquareTest, AreaPositiveLength)
{
    Square s(1);
    EXPECT_EQ(1, s.area());
}
TEST(SquareTest, AreaZeroLength)
{
    Square s(0);
    EXPECT_EQ(0, s.area());
}
TEST(SquareTest, AreaNegativeLength)
{
    Square s(-1);
    EXPECT_EQ(1, s.area());
}
TEST(SquareTest, PerimeterPositiveLength)
{
    Square s(1);
    EXPECT_EQ(4, s.perimeter());
}
TEST(SquareTest, PerimeterZeroLength)
{
    Square s(0);
    EXPECT_EQ(0, s.perimeter());
}
TEST(SquareTest, PerimeterNegativeLength)
{
    Square s(-1);
    EXPECT_EQ(4, s.perimeter());
}
/* End Of Square Tests */
/* Circle Tests */
TEST(CircleTest, Label)
{
    Circle c(1);
    EXPECT_STREQ("Circle", c.getLabel());
}
TEST(CircleTest, Sides)
{
    Circle c(1);
    EXPECT_EQ(0, c.getSides());
}
TEST(CircleTest, AreaPositiveRadius)
{
    Circle c(1);
    EXPECT_EQ(M_PI, c.area());
}
TEST(CircleTest, AreaZeroRadius)
{
    Circle c(0);
    EXPECT_EQ(0, c.area());
}
TEST(CircleTest, AreaNegativeRadius)
{
    Circle c(-1);
    EXPECT_EQ(M_PI, c.area());
}
TEST(CircleTest, PerimeterPositiveRadius)
{
    Circle c(1);
    EXPECT_EQ(2 * M_PI, c.perimeter());
}
TEST(CircleTest, PerimeterZeroRadius)
{
    Circle c(0);
    EXPECT_EQ(0, c.perimeter());
}
TEST(CircleTest, PerimeterNegativeRadius)
{
    Circle c(-1);
    EXPECT_EQ(2 * M_PI, c.perimeter());
}
/* End Of Circle Tests */
