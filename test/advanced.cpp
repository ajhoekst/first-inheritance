#include "gtest/gtest.h"

#include "inheritance.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}
/* Pyramid Tests */
// Label
TEST(PyramidTest, Label)
{
    // (base, height)
    Pyramid p(1, 1);
    EXPECT_STREQ("Pyramid", p.getLabel());
}
// End Of Label
// Sides
TEST(PyramidTest, Sides)
{
    Pyramid p(1, 1);
    EXPECT_EQ(8, p.getSides());
}
// End Of Sides
// Perimeter
TEST(PyramidTest, PerimeterPositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Pyramid p(0, 0);
    EXPECT_EQ(0, p.perimeter());

    // base 0
    Pyramid p2(1, 0);
    EXPECT_EQ(0, p2.perimeter());

    // height 0
    Pyramid p3(0, 1);
    EXPECT_EQ(8, p3.perimeter());
}
TEST(PyramidTest, PerimeterPositiveSideNegative)
{
    // for reference 
    // Perimeter = 4 * base + 4 * slant height
    // slant height = sqrt( (1/2 * base)^2 + height^2) =  sqrt(1/4b^2 + h^2)
    // .`. -> P = 4b + 4*sqrt(1/4b^2 + h^2)
    // For base = 6, height = 4:
    // slant height = sqrt (1/4 * 36 + 16) =  sqrt(25) = 5
    // 4 * 6 + 4 * 5 = 44

    // Test different parameters being negative
    // Null case (all negative)
    Pyramid p(-6, -4);
    EXPECT_EQ(44, p.perimeter());

    // base -6
    Pyramid p2(-6, 4);
    EXPECT_EQ(44, p2.perimeter());

    // height -4
    Pyramid p3(6, -4);
    EXPECT_EQ(44, p3.perimeter());
}
TEST(PyramidTest, PerimeterMethod)
{
    Pyramid p(12, 8);
    EXPECT_EQ(88, p.perimeter());
}
// End Of Perimeter
// Area
TEST(PyramidTest, AreaPositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Pyramid p(0, 0);
    EXPECT_EQ(0, p.area());

    // base 0
    Pyramid p2(0, 1);
    EXPECT_EQ(0, p2.area());

    // height 0
    Pyramid p3(1, 0);
    EXPECT_EQ(1, p3.area());
}
TEST(PyramidTest, AreaPositiveSideNegative)
{
    // for reference 
    // Area = base^2 + (1/2 * base * slant height) * 4
    // slant height = sqrt( (1/2 * base)^2 + height^2) =  sqrt(1/4b^2 + h^2)
    // .`. -> Area = b^2 + 2b*sqrt(1/4b^2 + h^2)
    // For base = 6, height = 4:
    // slant height = sqrt (1/4 * 36 + 16) =  sqrt(25) = 5
    // 6^2 + 1/2*6*5*4 = 96

    // Test different parameters being negative
    // Null case (all negative)
    Pyramid p(-6, -4);
    EXPECT_EQ(96, p.area());

    // base -6
    Pyramid p2(-6, 4);
    EXPECT_EQ(96, p2.area());

    // height -4
    Pyramid p3(6, -4);
    EXPECT_EQ(96, p3.area());

}
TEST(PyramidTest, AreaMethod)
{
    Pyramid p(12, 8);
    EXPECT_EQ(384, p.area());
}
// End Of Area
/* End Of Pyramid Tests */
/* Tetrahedron Tests */
// Label
TEST(TetrahedronTest, Label)
{
    // (base, height)
    Tetrahedron t(1);
    EXPECT_STREQ("Tetrahedron", t.getLabel());
}
// End Of Label
// Sides
TEST(TetrahedronTest, Sides)
{
    Tetrahedron t(1);
    EXPECT_EQ(6, t.getSides());
}
// End Of Sides
// Perimeter
TEST(TetrahedronTest, PerimeterPositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Tetrahedron t(0);
    EXPECT_EQ(0, t.perimeter());
}
TEST(TetrahedronTest, PerimeterPositiveSideNegative)
{
    // for reference 
    // Perimeter = 6 * length
    // For length = 6 -> 36

    // Test different parameters being negative
    // Null case (all negative)
    Tetrahedron t(-6);
    EXPECT_EQ(36, t.perimeter());
}
TEST(TetrahedronTest, PerimeterMethod)
{
    Tetrahedron t(3);
    EXPECT_EQ(18, t.perimeter());
}
// End Of Perimeter
// Area
TEST(TetrahedronTest, AreaPositiveSideZero)
{
    // Test different parameters being 0
    // Null case (all 0)
    Tetrahedron t(0);
    EXPECT_EQ(0, t.area());
}
TEST(TetrahedronTest, AreaPositiveSideNegative)
{
    // for reference 
    // Area = 4 * length^2 * sqrt(3)
    // For length = 2 -> 4 * 4 * sqrt(3) =  16sqrt(3)

    Tetrahedron t(-6);
    // ~ 27.7
    // EXPECT_EQ(27.7, t.area());
}
TEST(TetrahedronTest, AreaMethod)
{
    Tetrahedron t(6);
    // ~ 27.7
    // EXPECT_EQ(27.7, t.area());
}
// End Of Area
/* End Of Tetrahedron Tests */