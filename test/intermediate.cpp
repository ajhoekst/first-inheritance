#include "gtest/gtest.h"

#include "inheritance.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}

/* Box Tests */
// Label
TEST(BoxTest, Label)
{
    Box b(1, 1, 1);
    EXPECT_STREQ("Box", b.getLabel());
}
// End Of Label
// Sides
TEST(BoxTest, Sides)
{
    Box b(1, 1, 1);
    EXPECT_EQ(12, b.getSides());
}
// End Of Sides
// Perimeter
TEST(BoxTest, PerimeterPositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Box b(0, 0, 0);
    EXPECT_EQ(0, b.perimeter());

    // length 0
    Box b2(1, 0, 0);
    EXPECT_EQ(4, b2.perimeter());

    // width 0
    Box b3(0, 2, 0);
    EXPECT_EQ(8, b3.perimeter());

    // height 0
    Box b4(0, 0, 3);
    EXPECT_EQ(12, b4.perimeter());
}
TEST(BoxTest, PerimeterPositiveSideNegative)
{
    // for reference 
    // Perimeter = 4 * (l + w + h)
    // For 1, 2, 3 -> 24 

    // Test different parameters being negative
    // Null case (all negative)
    Box b(-1, -2, -3);
    EXPECT_EQ(24, b.perimeter());

    // length -1
    Box b2(-1, 2, 3);
    EXPECT_EQ(24, b2.perimeter());

    // width -2
    Box b3(1, -2, 3);
    EXPECT_EQ(24, b3.perimeter());

    // height --3
    Box b4(1, 2, -3);
    EXPECT_EQ(24, b4.perimeter());
}
TEST(BoxTest, PerimeterMethod)
{
    // 4 * (3 + 4 + 5) = 94
    Box b(3, 4, 5);
    EXPECT_EQ(48, b.perimeter());
}
// End Of Perimeter
// Area
TEST(BoxTest, AreaPositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Box b(0, 0, 0);
    EXPECT_EQ(0, b.area());

    // length 0
    Box b2(1, 0, 0);
    EXPECT_EQ(0, b2.area());

    // width 0
    Box b3(0, 2, 0);
    EXPECT_EQ(0, b3.area());

    // height 0
    Box b4(0, 0, 3);
    EXPECT_EQ(0, b4.area());
}
TEST(BoxTest, AreaPositiveSideNegative)
{
    // for reference 
    // Surface area = 2 * (l*w + l*h + w*h)
    // For 1, 2, 3 -> 22 

    // Test different parameters being negative
    // Null case (all negative)
    Box b(-1, -2, -3);
    EXPECT_EQ(22, b.area());

    // length -1
    Box b2(-1, 2, 3);
    EXPECT_EQ(22, b2.area());

    // width -2
    Box b3(1, -2, 3);
    EXPECT_EQ(22, b3.area());

    // height --3
    Box b4(1, 2, -3);
    EXPECT_EQ(22, b4.area());
}
TEST(BoxTest, AreaMethod)
{
    // 2 * (3*4 + 4*5 + 5*3) = 94
    Box b(3, 4, 5);
    EXPECT_EQ(94, b.area());
}
// End Of Area
/* End Of Box Tests */

/* Cube Tests */
// Label
TEST(CubeTest, Label)
{
    Cube c(1);
    EXPECT_STREQ("Cube", c.getLabel());
}
// End Of Label
// Sides
TEST(CubeTest, Sides)
{
    Cube c(1);
    EXPECT_EQ(12, c.getSides());
}
// End Of Sides
// Perimeter
TEST(CubeTest, PerimeterPositiveSideZero)
{
    // Null case
    Cube c(0);
    EXPECT_EQ(0, c.perimeter());
}
TEST(CubeTest, PerimeterPositiveSideNegative)
{
    // for reference 
    // Perimeter = 4 * (3 * l)
    // For 3 -> 36 

    // Test different parameters being negative
    // Null case (all negative)
    Cube c(-3);
    EXPECT_EQ(36, c.perimeter());
}
TEST(CubeTest, PerimeterMethod)
{
    // 4 * (4 + 4 + 4) = 48
    Cube c(4);
    EXPECT_EQ(48, c.perimeter());
}
// End Of Perimeter
// Area
TEST(CubeTest, AreaPositiveSideZero)
{
    // Null case
    Cube c(0);
    EXPECT_EQ(0, c.area());
}
TEST(CubeTest, AreaMethod)
{
    // for reference 
    // Surface area = 2 * (l*w + l*h + w*h)
    //              = 12 * (l^2)
    // For 2 -> 48
    Cube c(2);
    EXPECT_EQ(48, c.area());
}
// End Of Area
/* End Of Cube Tests */
/* Sphere Tests */
// Label
TEST(SphereTest, Label)
{
    Sphere c(1);
    EXPECT_STREQ("Sphere", c.getLabel());
}
// End Of Label
// Sides/Perimeter
TEST(SphereTest, Sides)
{
    // This is trival because the getSides and perimeter should return 0...

    // # of sides for sphere is defined to be INF
    // Let's use 0 though
    Sphere c(1);
    EXPECT_EQ(0, c.getSides());
    EXPECT_EQ(0, c.perimeter());

    Sphere c2(-1);
    EXPECT_EQ(0, c2.getSides());
    EXPECT_EQ(0, c2.perimeter());

    Sphere c3(0);
    EXPECT_EQ(0, c3.getSides());
    EXPECT_EQ(0, c3.perimeter());
}
// End Of Perimeter
// Area
TEST(SphereTest, AreaPositiveSideZero)
{
    // Null case
    Sphere c(0);
    EXPECT_EQ(0, c.area());
}
TEST(SphereTest, AreaMethod)
{
    // for reference 
    // Surface area = 4 * pi * r^2
    // For 3 -> 4 * 3.1415 * 3* 3 -> 
    Sphere c(3);
    EXPECT_EQ(36 * PI, c.area());
}
// End Of Area
/* End Of Sphere Tests */