#include <gtest/gtest.h>
#include "Calculator.hpp"

TEST(AddTest, checkAddTwoNumbers)
{
    Calculator add{2, 5};
    EXPECT_EQ(add.addNumbers(), 7);
}

TEST(AddTest, checkSubstractionTwoNumbers)
{
    Calculator minus{7, 5};
    EXPECT_EQ(minus.subtractionNumbers(), 2);
}

TEST(AddTest, checkDividerNumbers)
{
    Calculator divider{1, 0};
    EXPECT_EQ(divider.dividerNumbers(), 0);
}

TEST(AddTest, checkDividerNumbers1)
{
    Calculator divider{1, 1};
    EXPECT_EQ(divider.dividerNumbers(), 1);
}

TEST(AddTest, checkMultiplicationNumbers)
{
    Calculator multiplication{1, 1};
    EXPECT_EQ(multiplication.multiplicationNumbers(), 1);
}