#include "gtest/gtest.h"

#include "inheritance.h"

#define _USE_MATH_DEFINES
#include <cmath>

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
// Volume
TEST(BoxTest, VolumePositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Box b(0, 0, 0);
    EXPECT_EQ(0, b.volume());

    // length 0
    Box b2(1, 0, 0);
    EXPECT_EQ(0, b2.volume());

    // width 0
    Box b3(0, 2, 0);
    EXPECT_EQ(0, b3.volume());

    // height 0
    Box b4(0, 0, 3);
    EXPECT_EQ(0, b4.volume());
}
TEST(BoxTest, VolumePositiveSideNegative)
{
    // for reference 
    // Volume = l * w * h
    // For 1, 2, 3 -> 6

    // Test different parameters being negative
    // Null case (all negative)
    Box b(-1, -2, -3);
    EXPECT_EQ(6, b.volume());

    // length -1
    Box b2(-1, 2, 3);
    EXPECT_EQ(6, b2.volume());

    // width -2
    Box b3(1, -2, 3);
    EXPECT_EQ(6, b3.volume());

    // height -3
    Box b4(1, 2, -3);
    EXPECT_EQ(6, b4.volume());
}
TEST(BoxTest, VolumeMethod)
{
    // 3 * 4 * 5 = 60
    Box b(3, 4, 5);
    EXPECT_EQ(60, b.volume());
}
// End Of Volume
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
// Volume
TEST(CubeTest, VolumePositiveSideZero)
{
    // Null case
    Cube c(0);
    EXPECT_EQ(0, c.volume());
}
TEST(CubeTest, VolumePositiveSideNegative)
{
    // for reference 
    // Volume = s ^ 3
    // For 3 -> 27 

    // Test different parameters being negative
    // Null case (all negative)
    Cube c(-3);
    EXPECT_EQ(27, c.volume());
}
TEST(CubeTest, VolumeMethod)
{
    // 4 ^ 3 = 64
    Cube c(4);
    EXPECT_EQ(64, c.volume());
}
// End Of Volume
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
    // For 2 -> 24
    Cube c(2);
    EXPECT_EQ(24, c.area());
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
// Sides
TEST(SphereTest, Sides)
{
    // # of sides for sphere is defined to be INF
    // Let's use 0 though
    Sphere c(1);
    EXPECT_EQ(0, c.getSides());

    Sphere c2(-1);
    EXPECT_EQ(0, c2.getSides());

    Sphere c3(0);
    EXPECT_EQ(0, c3.getSides());
}
// End Of Sides
// Volume
TEST(SphereTest, VolumePositiveSideZero)
{
    // Null case
    Sphere c(0);
    EXPECT_EQ(0, c.volume());
}
TEST(SphereTest, VolumePositiveSideNegative)
{
    // for reference 
    // Volume = 4/3 * pi * r ^ 3
    // For 3 -> 4/3 * pi * 27 = 36 * pi

    // Test different parameters being negative
    // Null case (all negative)
    Sphere c(-3);
    EXPECT_EQ(108.0 / 3.0 * M_PI, c.volume());
}
TEST(SphereTest, VolumeMethod)
{
    // 4/3 pi * 4 ^ 3 = 4/3 * pi * 64 = 256 / 3 * pi
    Sphere c(4);
    EXPECT_EQ(256.0 / 3.0 * M_PI, c.volume());
}
// End Of Volume
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
    EXPECT_EQ(36 * M_PI, c.area());
}
// End Of Area
/* End Of Sphere Tests */