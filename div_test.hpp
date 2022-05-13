#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__
#include "gtest/gtest.h"
#include "div.hpp"

using namespace std;

TEST(DivTest, DivEvaluateZeroNum) {
    Base* left = new Op(0.0);
    Base* right = new Op(4.0);
    Base* test = new Div(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 0);
    EXPECT_EQ(test -> stringify(), "(0.000000 / 4.000000)");
}

#endif
