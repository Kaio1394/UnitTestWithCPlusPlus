#include "pch.h"
#include "../MyMathLib/MyMathLib.hpp"


TEST(MathTestCase, MathTestSqrt9) {
	ASSERT_EQ(3, mySqrt(9));
}

TEST(MathTestCase, TestIfNumberIsPositive) {
	ASSERT_TRUE(isPositive(3.0));
}

TEST(MathTestCase, TestSum) {
	ASSERT_EQ(4, sum(1, 3));
}
TEST(MathTestCase, TestMinus) {
	ASSERT_EQ(0, minus(1, 3));
}
