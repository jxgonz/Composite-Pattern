#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP_
#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(0.0);
    EXPECT_EQ(test->evaluate(), 0.0);
    EXPECT_EQ(test->stringify(), "0.000000");
}

TEST(OpTest, OpEvaluateSmallNeg) {
    Op* test = new Op(-0.4);
    EXPECT_EQ(test->evaluate(), -0.4);
    EXPECT_EQ(test->stringify(), "-0.400000");
}

TEST(OpTest, OpEvaluateLargeNeg) {
    Op* test = new Op(-134.7);
    EXPECT_EQ(test->evaluate(), -134.7);
    EXPECT_EQ(test->stringify(), "-134.700000");
}

TEST(OpTest, OpEvaluateSmallPos) {
    Op* test = new Op(0.4);
    EXPECT_EQ(test->evaluate(), 0.4);
    EXPECT_EQ(test->stringify(), "0.400000");
}

TEST(OpTest, OpEvaluateLargePos) {
    Op* test = new Op(134.7);
    EXPECT_EQ(test->evaluate(), 134.7);
    EXPECT_EQ(test->stringify(), "134.700000");
}

#endif //__OP_TEST_HPP__
